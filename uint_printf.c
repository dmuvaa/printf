#include "main.h"
#include <stdio.h>

/**
 * print_uint - prints number
 * @num: number to be printed
 *
 * Return: nothing, void
 */

int print_uint(unsigned int num)
{
	unsigned int count;

	count = 0;
	if (num / 10)
		count += print_uint(num / 10);

	count += _putchar((num % 10) + '0');
	return (count);
}
