#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _printf - all logic for the printf project.
* @format: string specifier formats.
*
* Return: Gives The length(char_num++).
*/
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, char_num = 0;

	if (!format)
		return (-1);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				char_num++;
				i++;
			}
			else if (func(format[i + 1]) != NULL)
			{
				char_num += (func(format[i + 1]))(ap);
				i++;
			}
			else
			{
				_putchar(format[i]);
				char_num++;
			}
		}
		else
		{
			_putchar(format[i]);
			char_num++;
		}
	}
	return (char_num);
	va_end(ap);
}
