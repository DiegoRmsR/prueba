#include "holberton.h"
/**
 * print_char - print a character
 * @list: size of char
*/

void print_char(va_list, *list)
{
	char c;

	c = va_arg(list, int);
	putchar(c);
}
/**
 * print_string - print a string
 * @list: size of string
*/
void print_string(va_list, *list)
{
	char *s;
	int i = 0;

	s = va_arg(list, char*);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
