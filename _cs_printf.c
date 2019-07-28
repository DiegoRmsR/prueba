#include "holberton.h"
/**
 * print_char - print a character
 * @list: size of char
 *
 * Return: 1
*/

int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
/**
 * print_string - print a string
 * @list: size of string
 *
 * Return: Number of chars printed
*/
int print_string(va_list list)
{
	char *s;
	int i = 0;

	s = va_arg(list, char*);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
