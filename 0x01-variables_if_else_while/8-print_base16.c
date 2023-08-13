#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Suhexhexess)
 */

int main(void)
{
	char hex = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(hex);
			hex++;
		}
	}
	putchar('\n');
	return (0);
}
