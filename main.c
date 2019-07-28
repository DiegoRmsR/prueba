#include "holberton.h"

int main (void)
{
	int l_original;
	int l_copy;

	l_copy = _printf("hola %s\n", "juan");
	l_original = printf("hola %s\n", "juan");

	printf("Lenght copy: %d\n", l_copy);
	printf("Lenght original: %d\n", l_original);

	return (0);
}
