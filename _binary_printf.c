#include "holberton.h"
/**
 * print_base2 - convert numbers to binary
 * @n: The number to be printed
 * @length: The digits to be printed
 *
 * Return: On success length.
 */
int print_base2(unsigned int n, int length)
{
	if (n / 2)
		length = print_base2(n / 2, length + 1);
	_putchar(n % 2 + '0');
	return (length);
}
/**
 * print_binary - prints in binary
 * @list: The name for va_list
 *
 * Return: On success length.
 */
int print_binary(va_list list)
{
	int length = 0;
	unsigned int b = va_arg(list, unsigned int);

	length = print_base2(b, length) + 1;
	return (length);
}
