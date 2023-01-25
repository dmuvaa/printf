#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	va_start(args, format);
	for (int i = 0; format[i] != '\0'; i++)
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
				char *s = va_arg(args, char*);

				for (int j = 0; s[j] != '\0'; j++)
				{
					putchar(s[j]);
					count++;
				}
			}
			else if (format[i] == '%')
			{
				putchar('%');
				count++;
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
