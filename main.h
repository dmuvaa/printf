#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>


/** Prototypes to print the conversion specifiers */
extern int _printf(const char *format, ...);
extern int print_ev(char c, va_list ap);
extern int print_c(va_list);
extern int print_s(va_list);
extern int print_str(va_list);
extern int print_d(va_list);
extern int print_b(va_list);
extern int print_u(va_list);
extern int print_o(va_list);
extern int print_x(va_list);
extern int print_X(va_list);
extern int print_p(va_list);


/*
* struct identify - holds a string identifier and a function pointer
* @s: is the format specifier
* @print: pointer to function to be called
*/
typedef struct identify
{
	char *s;
	int (*print)(va_list ap);
} identify_t;

#endif
