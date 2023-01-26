#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * print_u - prints unsigned integer
 * @ap: va_list
 * Return: count of characters printed
 */

int print_u(va_list ap)
{
	return (print_uint(va_arg(ap, unsigned int)));
}

/**
* print_o - prints an unsigned integer in octal
* @ap: va_list
*
* Return: count of characters printed
*/
int print_o(va_list ap)
{
	return (print_oct(va_arg(ap, unsigned int)));
}

/**
* print_x - prints an unsigned integer in hexadecimal
* @ap: va_list
*
* Return: count of characters printed
*/
int print_x(va_list ap)
{
	return (print_hex(va_arg(ap, unsigned int)));
}

/**
* print_X - prints out an unsigned integer in HEX
* @ap: va_list
*
* Return: count of character printed
*/
int print_X(va_list ap)
{
	return (print_HEX(va_arg(ap, unsigned int)));
}

/**
* print_p - prints out an unsigned integer
* @ap: va_list
*
* Return: count of characters printed
*/
int print_p(va_list ap)
{
	_putchar('0');
	_putchar('x');
	return (print_addr(va_arg(ap, unsigned long int)) + 2);
}
