#include "main.h"

/**
 * swap_int - main function
 * @*b: pointer with adress value
 * @*a: pointer with adress value
 * description:swaps the values of two integers
 * return: 0 on success
 */

void swap_int(int *a, int *b)
{
	int i;
	i = *a;
	*a = *b;
	*b = i;
}
