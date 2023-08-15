#include <stdio.h>

void printchar(char n[])
{
	printf("%s\n", n);
}

void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a' ; lowercase <= 'z' ; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
}
