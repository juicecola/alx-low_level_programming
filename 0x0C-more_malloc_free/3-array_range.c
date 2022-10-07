#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: smallest number
 * @max: biggest value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *m;
	int i, j = 0;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(*m) * (max - min) + 1);
	if (m != NULL)
	{
		for (i = min; i <= max; i++)
		{
			m[j] = i;
			j++;
		}
	return (m);
	}
	else
		return (NULL);
}
