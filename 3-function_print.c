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

