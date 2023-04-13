#include "search_algos.h"

/**
 * binary search
 * @array: pointer to the fisrt element o array to search
 * @size: no of elements in array
 * @value: what to look for
 *
 * Return: index with value or -1 if value not found or array NULL
 * .
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high)/ 2;
		printf("Searching in array: ");
		for (x = low; x <= high; x++)
			printf("%i%s", array[x], x ==high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
