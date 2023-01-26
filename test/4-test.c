"include "main.h"
/**
 *print_f - prints format specifiers
 *@format: character string
 *Return: 0
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
				handle_c_conversion(args, &count);
			}
			else if (format[i] == 's')
			{
				handle_s_conversion(args, &count);
			}
			else if (format[i] == '%')
			{
				handle_percent_conversion(&count);
			}
			else if (format[i] == 'd')
			{
				handle_d_conversion(args, &count);
			}
			else if (format[i] == 'f')
			{
				handle_f_conversion(args, &count);
			}
			else if (format[i] == 'x')
			{
				handle_x_conversion(args, &count);
			}
			else
			{
				handle_other_conversion(format[i], &count);
			}
		}
		else
		{
			handle_other_conversion(format[i], &count);
		}
	}
	va_end(args);
	return (count);
}
