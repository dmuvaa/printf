#include "main.h"
#include <stdio.h>

/**
 * print_hex - prints number
 * @num: number to be printed
 *
 * Return: void
 */

int print_hex(unsigned int num)
{
	unsigned int count;

	count = 0;
	if (num / 16)
		count += print_hex(num / 16);

	if ((num % 16) > 9)
		count += _putchar((num % 16) + 87);
	else
		count += _putchar((num % 16) + '0');
	return (count);
}
