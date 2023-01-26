#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_c - prints a character
 * @ap: va_list
 * Return: count of character printed
 */

int print_c(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
 * print_s - prints a string
 * @ap: va_list
 * Return: count of character printed
 */
int print_s(va_list ap)
{
	return (print_str(va_arg(ap, char *)));
}

/**
 * print_str - print a string in reverse
 * @ap: va_list
 * Return: count of character printed
 */

int print_s_r(va_list ap)
{
	char *str;
	int count;

	str = va_arg(ap, char *);
	count = print_str_rev(str);

	return (count);
}

/**
 * print_d - prints an integer
 * @ap: va_list
 * Return: count of characters printed
 */
int print_d(va_list ap)
{
	return (print_int(va_arg(ap, int)));
}

/**
 * print_b - prints an integer in binary
 * @ap: va_list
 * Return: count of characters printed
 */

int print_b(va_list ap)
{
	return (print_bin(va_arg(ap, unsigned int)));
}
