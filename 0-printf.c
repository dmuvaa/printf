#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <string.h>
/**
	* _printf - produces output according to a format
	* @format: lists the type of arguments according to format
	*
	* Return: 0
	*/

int _printf(const char *format, ...)
{
	va_list list;
	char *s, c;

	int i = 0, len = strlen(format);


	va_start(list, format);
		while (i < len)
		{
			if (format[i] == '%')
			{
				i++;

			switch (format[i])
			{
						case ('c'):
						c = va_arg(list, int);
						putchar(c);
						break;

						case('s'):
						s = va_arg(list, char*);

					while (*s)
					putchar(*s++);
							break;
			}
			}
			else
			putchar(format[i]);
				i++;
		}
	return (0);
}

