#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * Return: fizzbuzz
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("fizz%c", ' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("buzz%c", ' ');
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
		printf("fizzbuzz%c", ' ');
		}
		else
		{
		printf("%d%c", i, ' ');
		}
	}
	return (0);
}
