#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
* print_num - Print number
* @n: va_list
*
* Return: count.
*/
int print_num(va_list n)
{
	long int num;
	int next_num, counter = 0, next;

	num = va_arg(n, int);
	if (num < 0)
	{
		num *= -1;
		_putchar(45);
		counter++;
	}
	if (num >= 0 && num <= 9)
	{
		_putchar(num + 48);
		counter++;
	}
	if (num > 9)
		next = 10;
	while (num / next > 9)
	{
		next *= 10;
	}
	while (next > 0)
	{
		next_num = num / next;
		num = num % next;
		_putchar(next_num + 48);
		next = next / 10;
		counter++;
	}
	return (counter++);
}
