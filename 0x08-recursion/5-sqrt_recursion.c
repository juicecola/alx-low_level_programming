#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number
 * Return: n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1)); 
}

/**
 * square - recursive sqr
 * @n: number
 * @i: iterator
 * Return: number
 */

int square(int n, int i)
{
	if (i * i = n)
		return (i);
	else if (i * i < n)
		return (square(n, i +1));
	else
		return (-1);
}

