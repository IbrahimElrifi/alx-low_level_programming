#include "main.h"

/**
 * print_triangle - print triangle using # symbole
 * @size: integer number
 * Return: a triangle according to size
 */

void print_triangle(int size)
{
int i, j;

for (int i = 0; i < size; i++)
{
	for (int j = 1; j < size - i; j++)
	{
	_putchar(' ');
	}
	for (int k = 0; k <= i; k++)
	{
	_putchar('#');
	}
	_putchar('\n');
}
}
