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
	char *str;

	va_list args;

	va_start(args, format);

	while (format[len_format])
		len_format++;

	for (i = 0; i < len_format; i++)
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}

		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s", str);
		}


		else if (format[i] == '%')
		{
			printf("%%");
		}

		else
			break;
	}

	return (len_format);
}
