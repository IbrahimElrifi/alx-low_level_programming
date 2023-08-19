#include "main.h"

/**
 * print_diagonal - print diagonal lines
 * @n: integer number
 * Return: a number of diagonal lines according to n
 */

void print_line(int n)
{
	char l = '_';
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
		_putchar('\n');
		}
	_putchar(l);
	}
	_putchar('\n');
}
