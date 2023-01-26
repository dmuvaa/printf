#include "main.h"
#include <stdio.h>

/**
 * print_int- prints number
 * @n: number to be printed
 *
 * Return: nothing, void.
 */
int print_int(int n)
{
	unsigned int count, num;

	count = 0;

	if (n < 0)
	{
		num = n * -1;
		count += _putchar('-');
	}
	else
		num = n;

	if (num / 10)
		count += print_int(num / 10);

	count += _putchar((num % 10) + '0');

	return (count);
}
