#include "main.h"

/**
 * print_alphabetx10- Entry point
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	char lowercase;
	int i;

while (i < 10)
{
	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
	i++;
}
}
