#include "main.h"
#include <stdio.h>

/**
 * print_bin - prints number
 * @num: number to be printed
 *
 * Return: nothing, void.
 */
int print_bin(unsigned int num)
{
	unsigned int count;

	count = 0;

	if (num / 2)
		count += print_bin(num / 2);

	count += _putchar((num % 2) + '0');

	return (count);
}
