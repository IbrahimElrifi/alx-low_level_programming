#include <stdio.h>
/**
 * main -Entry point
 * Return: 0 (Succes)
 */
int main(void)
{
	char charsize;
	int intsize;
	long int longintsize;
	long long int longlongintsize;
	float floatsize;
	printf("Size of a char: %zu bytes(s)\n", sizeof(charsize));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intsize));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(longintsize));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintsize));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatsize));
	return (0);
}
