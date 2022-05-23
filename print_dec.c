#include <stdarg.h>
#include "main.h"

/**
 * print_dec - prints a decimal number.
 * @dec: number to be printed.
 *
 * Return: count.
 */
int print_dec(va_list dec)
{
	int a[10];
	int j, m, n;
	int sum, count = 0;

	n = va_arg(dec, int);

	m = 1000000000;
	a[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}
