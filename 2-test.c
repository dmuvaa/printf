#include "main.h"
/**
	* _printf - prints out format
	* @format: array of conversion specifiers
	* Return: nothing (void)
	*/
int _printf(const char *format, ...)
{
	int i, j;
	int count = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
		{
		if (format[i] == '%')
			{
			i++;
			if (format[i] == 'c')
				{
				char c = va_arg(args, int);

				putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				char s = va_arg(args, int);

				if (s == NULL) 
					{
					return (-1);
				}
				for (j = 0; s[j] != '\0'; j++)
						{
					putchar(s[j]);
					count++;
				}
			} else if (format[i] == '%')
				{
				putchar('%');
				count++;
			} else if (format[i] == 'd')
				{
				int d = va_arg(args, int);
				char *temp = itoa(d);

				for (j = 0; temp[j] != '\0'; j++)
						{
					putchar(temp[j]);
					count++;
						}
			}
						else if (format[i] == 'f')
				{
				double f = va_arg(args, double);
				char *temp = ftoa(f);

				for (j = 0; temp[j] != '\0'; j++)
						{
					putchar(temp[j]);
					count++;
				}
			}
			else if (format[i] == 'x')
				{
				int x = va_arg(args, int);
				char *temp = itox(x);
				for (j = 0; temp[j] != '\0'; j++)
						{
					putchar(temp[j]);
					count++;
				}
			}
			else
				{
				putchar('%');
				putchar(format[i]);
				count += 2;
			}
		}
		else
			{
			putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
