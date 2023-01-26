#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
* check_null - checks if a constant char pointer is null
* @format: character pointer to check
*
* Return: nothing, void.
*/
void check_null(const char *format)
{
	if (!format)
	{
		write(1, "Error\n", 6);
		exit(98);
	}
}
