#include "main.h"

/**
 * swap_int - main function
 * @b: second integer
 * @a: first integer
 * description: swaps the values of two integers
 * return: 0 on success
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
