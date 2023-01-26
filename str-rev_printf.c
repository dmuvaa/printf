#include "main.h"

/**
 * print_str_rev - prints a string in reverse
 * @str: string to print
 *
 * Return: int, number of characters printed
 */
int print_str_rev(char *str)
{
	int count, rev;

	count = 0, rev = 0;

	while (str[rev])
		rev++;

	count = rev;

	rev--;
	while (rev >= 0)
	{
		_putchar(str[rev]);
		rev--;
	}

	return (count);
}
