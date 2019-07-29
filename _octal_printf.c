#include "holberton.h"
/**
 * print_base8 - convert numbers to octal
 * @n: The number to be printed
 * @length: The digits to be printed
 *
 * Return: On success length.
 */
int print_base8(unsigned int n, int length)
{
	if (n / 8)
		length = print_base8(n / 8, length + 1);
	_putchar(n % 8 + '0');
	return (length);
}
/**
 * print_octal - prints in octal
 * @list: The name for va_list
 *
 * Return: On success length.
 */
int print_octal(va_list list)
{
	int length = 0;
	unsigned int b = va_arg(list, unsigned int);

	length = print_base8(b, length) + 1;
	return (length);
}
