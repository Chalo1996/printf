#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "main.h"
/**
* func - pointer to functions va_list.
* @chars: pointer to chars.
*
* Return: ALWAYS ZERO.
*/
int(*func(const char chars))(va_list)
{
	print_func(arr[]) = {
		{'c', print_c},
		{'s', print_string},
		{'d', print_num},
		{'i', print_num},
		{'\0', NULL}
	};

	int i;

	for (i = 0; arr[i].ch != '\0'; i++)
	{
		if (arr[i].ch == chars)
		{
			return (arr[i].func_ptr);
		}
	}
	return (0);
}
