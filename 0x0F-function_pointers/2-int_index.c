#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: poiinter to array
 * @size: number of elements in an array
 * @cmp: pointer to the function to be used to compare values
 * Return: first element index,on succes or return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
