#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char revalphabet;

	for (revalphabet = 'z'; revalphabet >= 'a'; revalphabet--)
	{
	putchar(revalphabet);
	}
	putchar('\n');
	return (0);
}
