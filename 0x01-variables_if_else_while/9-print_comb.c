#include <stdio.h>
/**
  *main - prints all the numbers of base 16 in lowercase
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	if (num < 9)
	{
		putchar(',');
	}
	if (num < 9)
	{
	putchar(' ');
	}

	}
	putchar('$');
	return (0);
}
