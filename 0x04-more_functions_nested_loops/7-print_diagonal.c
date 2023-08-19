#include "main.h"

/**
 * print_diagonal - print digonal lines
 * @n: integer number
 * Return: a number of lines according to n
 */

void print_diagonal(int n)
{
	char l = 92;
	int i;
	int k;

	for (i = 0; i < n; i++)
{
		for (k = 0; k < i; k++)
		{
			_putchar(' ');
			if (n <= 0)
			{
			_putchar('\n');
			}
		}
}
	_putchar(l);
	_putchar('\n');
}
