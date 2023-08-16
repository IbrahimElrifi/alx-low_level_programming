#include "main.h"

/**
 * print_last_digit - print the last digit of an number
 * @n: integer to check
 * Return: n % 10 to get the last digit
 */

int print_last_digit(int n)
{
{
	int last_num = n % 10;

	if (last_num < 0)
		last_num *= -1;

	_putchar(last_num + '0');

	return (last_num);
}
}
