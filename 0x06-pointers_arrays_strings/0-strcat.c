#include "main.h"

/**
 *  _strcat - concatenates two strings
 *  @dest: string to append to
 *  @src: string to add
 *  Return: a pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);

}
