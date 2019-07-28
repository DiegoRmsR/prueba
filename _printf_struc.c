#include "holberton.h"
/**
 * get_op_func - select the function
 * @s: pointer to structure
 * Return: function
 */
int (*get_print_func(char *s))(va_list)
{

print pf[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_decimal},
	{"i", print_int}
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 2)
	{
		if (pf[i].format[0] == *s)
		return (pf[i].f);
		i++;
	}
	return (NULL);
}
