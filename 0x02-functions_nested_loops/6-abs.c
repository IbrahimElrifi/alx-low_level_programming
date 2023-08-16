#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to check
 * Return: n *-1 if integer is less than 0 else return n
 */

int _abs(int n)
{
if (n <= 0)
{
	return (n * -1);
}
else
{
	return (n);
}
_putchar('\n');
}
