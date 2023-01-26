#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>


/** Prototypes to print the conversion specifiers */
extern int _printf(const char *format, ...);
extern int print_ev(char, va_list);
extern int print_c(va_list);
extern int print_s(va_list);
extern int print_S(va_list);
extern int print_s_r(va_list);
extern int print_d(va_list);
extern int print_b(va_list);
extern int print_u(va_list);
extern int print_o(va_list);
extern int print_x(va_list);
extern int print_X(va_list);
extern int print_p(va_list);
extern int print_rot(va_list);


extern int _putchar(char);
extern int print_str(char *);
extern int print_int(int);
extern int print_STR(char *);
extern int print_bin(unsigned int);
extern int print_HEX(unsigned int);
extern int print_hex(unsigned int);
extern int print_oct(unsigned int);
extern int print_uint(unsigned int);
extern int print_addr(unsigned long int);
extern int print_str_rev(char *);
extern int print_addr(unsigned long int);
extern void check_null(const char *);

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
