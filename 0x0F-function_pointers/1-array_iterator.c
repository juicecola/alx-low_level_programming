#include "function_pointers.h"

/**
 * array_iterator - executes a fxn given as parameter on each element of array
 * @array: given array
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}

}
