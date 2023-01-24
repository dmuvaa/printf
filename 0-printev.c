#include "main.h"
#include <stdio.h>

/**
 * print_ev - prints parameters
 * @c: string identifier
 * @ap: va_list of parameters
 * Return: number of characters printed
 */

int print_ev(char c, va_list ap)
{
	int count, i;
	identifier_t ids[] = {
		{"c", print_c},
		{"s", print_s},
		{"r", print_str},
		{"d", print_d},
		{"i", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{NULL, NULL}
	};

	i = 0, count = 0;

	while (ids[i].s)
	{
		if (*ids[i].s == c)
			count = ids[i].print(ap);
		i++;
	}
	return (count);
}
