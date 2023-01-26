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
* print_pct - prints the percent character
* @ap: va_list
*
* Return: count fo characters printed
*/
int print_pct(va_list ap)
{
	(void) ap;
	return (_putchar('%'));
}
