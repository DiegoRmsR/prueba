#include "holberton.h"
/**
 * get_print_func - select the function
 * @identifier: format to be printed
 * @list: pointer to structure
 * Return: function
 */
int get_print_func(char identifier, va_list list)
{

print pf[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_porcent},
	{NULL, NULL}
	};
	int i = 0, length = 0;

	while (pf[i].format != NULL)
	{
		if (pf[i].format[0] == identifier)
		{
			length += pf[i].f(list);
			return (length);
		}
		i++;
	}
	return (0);
}
