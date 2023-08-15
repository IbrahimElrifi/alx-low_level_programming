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
		_putchar(lowercase);
	}
	_putchar('\n');
}
