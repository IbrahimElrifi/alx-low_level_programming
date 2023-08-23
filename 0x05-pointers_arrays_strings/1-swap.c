#include "main.h"

/**
 *swap_int - reset the value of int variable a and b.
 *
 *@a: a pointer
 *
 *@b: a pointer
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
