#include "main.h"

/**
 * rev_string - revers a string.
 *
 *@s: a pointer
 *
 *Return: nothing
 */

void rev_string(char *s)
{
	char tmp;
	int i;
	int len = 0;
	int len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
