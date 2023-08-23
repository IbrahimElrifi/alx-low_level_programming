#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 *
 *@dest: a pointer
 *
 *@src: a pointer
 *
 *Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
