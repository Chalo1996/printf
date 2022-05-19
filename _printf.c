#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * _printf - produces outoput according to a format.
  * @format: format specifier.
  *
  * Return: number of characters.
  */
int _printf(const char *format, ...)
{
	int i, len_format = 0;

	va_list args;

	va_start(args, format);

	while (format[len_format])
		len_format++;

	for (i = 0; i < len_format; i++)
	{
		if (format[i] == 'c')
		{
			va_arg(args, int);
			len_format++;
			continue;
		}

		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			len_format++;
			continue;
		}


		else if (format[i] == '%')
		{
			len_format++;
			continue;
		}

		else
			break;
	}

	return (len_format);

	va_end(args);
}
