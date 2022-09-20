#include "main.h"

/**
 * print_array - main function
 * @a: represents array
 * @n: number of elements
 * description:prints n elements of an array of integers
 * return: 0 on success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

	}
	printf("\n");
}
