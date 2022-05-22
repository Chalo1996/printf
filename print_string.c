#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * print_string - Print a string
 * @s: va_list
 *
 * Return: The character otherwise (NULL)
 */
int print_string(va_list s)
{
	char *str;

	int i;

	str = va_arg(s, char*);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	return (i);
}
