#include "main.h"

/**
 * print_square - print square using # symbole
 * @size: integer number
 * Return: a square according to size
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, k;

		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size - 1; k++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
