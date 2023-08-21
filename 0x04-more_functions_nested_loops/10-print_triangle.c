#include "main.h"

/**
 * print_triangle - print triangle using # symbole
 * @size: integer number
 * Return: a triangle according to size
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			if (j < (size - 1 - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
