#include "main.h"
#include <stdio.h>

/**
 * print_oct - prints number
 * @num: number to be printed
 *
 * Return: void
 */

int print_oct(unsigned int num)
{
	unsigned int count;

	count = 0;
	if (num / 8)
		count += print_oct(num / 8);

	count += _putchar((num % 8) + '0');
	return (count);
}
