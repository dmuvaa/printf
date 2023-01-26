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
	identify_t ids[] = {
		{"c", print_c},
		{"s", print_s},
<<<<<<< HEAD
		{"S", print_S},
		{"r", print_str},
=======
		{"r", print_s_r},
>>>>>>> aaf57267fbc40c3c12a07bcb66f97e11c20501e9
		{"d", print_d},
		{"i", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"R", print_rot},
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
