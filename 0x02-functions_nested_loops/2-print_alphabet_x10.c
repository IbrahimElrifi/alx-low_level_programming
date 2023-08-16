#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	char lowercase;
	int i;

	i = 0;

while (i < 10)
{
	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
		_putchar(lowercase);
	}
	i++;
	_putchar('\n');
}
}
