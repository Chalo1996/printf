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
	int i, len_format = 0, charptr;
	int *num = &charptr;
	char *ch = (char *)num;
	char *str;

	va_list args;

	va_start(args, format);

	while (format[len_format])
		len_format++;

	for (i = 0; i < len_format; i++)
	{
		if (format[i] == 'c')
		{
			charptr = va_arg(args, int);
			fprintf(stdout, ch);
		}

		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			fprintf(stdout, str);
		}


		else if (format[i] == '%')
		{
			fprintf(stdout, "%%");
		}

		else
			break;
	}

	return (len_format - 1);
	va_end(args);
}
