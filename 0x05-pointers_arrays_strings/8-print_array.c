#include "main.h"

/**
 * print_array - prints half of a string, followed by a new line.
 *
 *@a: a pointer
 *
 *@n: an integer
 *
 *Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");

}