#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_addr - prints addr
 * @num: number to be printed
 *
 * Return: nothing, void.
 */
int print_addr(unsigned long int num)
{
	unsigned int count;

	if (num == 0)
		return (print_str("(nil)"));

	count = 0;
	if (num / 16)
		count += print_addr(num / 16);

	if ((num % 16) > 9)
		count += _putchar((num % 16) + 87);
	else
		count += _putchar((num % 16) + '0');

	return (count);
}
