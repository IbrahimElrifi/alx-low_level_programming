#include "main.h"

/**
 * print_sign - if number is greater or lesser than zero
 * @n: character to check
 * Return: 1 and print '+' if greater than 0 eles if is less -1and print '-' ,
 * 0 and print '0' if not
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	_putchar('0');
	return (0);
}
_putchar('\n');
}
