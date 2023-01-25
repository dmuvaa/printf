#include "main.h"

/**
* print_string - prints a string
* @str: string to point
*
* Return: number of chracters printed, integer
*/
int print_string(char *str)
{
	int x;

	x = 0;

	while (str[x])
		_putchar(str[x++]);

	return (x);

}
