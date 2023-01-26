#include "main.h"

/**
 * print_STR - prints a string and unprintable characters
 * string to print
 * Return: int, number of characters printed
 */

int print_STR(char *str)
{
	int count, i;

	count = 0, i = 0;

	while (str[count])
	{
		if ((str[count] > 0 && str[count] < 32) || (str[count] >= 127))
		{
			i += _putchar('\\');
			i += _putchar('x');

			if (str[count] < 16)
				i += _putchar('0');

			i += print_HEX(str[count++]);
			continue;
		}
		i += _putchar(str[count++]);
	}
	return (i);
}
