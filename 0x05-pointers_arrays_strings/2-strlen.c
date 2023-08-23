#include "main.h"

/**
 *swap_int - reset the value of int variable a and b.
 *
 *@a: a pointer
 *
 *@b: a pointer
 */

int _strlen(char *s)
{
	int len = 0;
  while (*s != '\0') {
    len++;
    s++;
  }
  return len;
	
}
