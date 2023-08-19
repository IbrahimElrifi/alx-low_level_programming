#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ,10 times
 * Return: print 10 lines of numbers 0 to 14
 */

void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
