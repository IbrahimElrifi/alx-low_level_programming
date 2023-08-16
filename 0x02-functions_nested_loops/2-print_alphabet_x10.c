#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	char lowercase;
	int i;

for (i = 0; i < 10; i++)
{
	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
}
