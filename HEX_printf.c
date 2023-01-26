#include "main.h"
#include <stdio.h>

/**
 * print_HEX - prints unsigned number in hex
 * @num: number to be printed
 *
 * Return: void
 */

int print_HEX(unsigned int num)
{
	unsigned int count;

	count = 0;
	if (num / 16)
		count += print_HEX(num / 16);

	if ((num % 16) > 9)
		count += _putchar((num % 16) + 55);
	else
		count += _putchar((num % 16) + '0');
	return (count);
}
