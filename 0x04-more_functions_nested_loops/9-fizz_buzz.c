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
			printf("Fizz%c", ' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz%c", ' ');
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
		printf("FizzBuzz%c", ' ');
		}
		else if (i < 100)
		{
		printf("%d%c", i, ' ');
		}
	}
	printf("\n");
	return (0);
}
