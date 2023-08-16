#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: Always void
 */

void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
