#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 * Return: numbers 0 to 9 except 2 and 4
 */

void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; i++)
		{
			if (c >= 10)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
	}
	_putchar('\n');
}
