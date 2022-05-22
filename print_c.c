#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_c - Print character
  * @c: va_list
  *
  * Return: 1.
  */
int print_c(va_list c)
{
	_putchar(va_arg(c, int));

	return (1);

}
