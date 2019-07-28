#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct format
{
	char *format;
	int (*f)(va_list list);
} print;

int _putchar(char c);
int _printf(const char *format, ...);
int get_print_func(char identifier, va_list list);
int print_char(va_list list);
int print_string(va_list list);
int print_decimal(va_list list);
int print_int(va_list list);

#endif
