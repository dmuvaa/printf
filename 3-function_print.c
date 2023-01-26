#include "main.h"

/**
* print_S - priints a string and non-printable characters
* @ap: va_list
*
* Return: count of characters printed
*/
int print_S(va_list ap)
{
	return (print_STR(va_arg(ap, char *)));
}

/**
 * print_buf - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed
 */

int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
