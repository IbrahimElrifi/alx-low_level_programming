#include "main.h"

/**
 * _isupper - checks if  is a letter uppercase or not
 *@c: integer number
 * Return: 1 if the letter is uppercase 0 if not.
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
