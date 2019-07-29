#include "holberton.h"
/**
  * main - print name
  * Return: always 0.
  */
int main(void)
{
	int l_original;
	int l_copy;

	l_copy = _printf("hola %c%s%%\n", 'j', "hola");
	l_original = printf("hola %c%s%%\n", 'j', "hola");

	printf("Lenght copy: %d\n", l_copy);
	printf("Lenght original: %d\n", l_original);

	return (0);
}
