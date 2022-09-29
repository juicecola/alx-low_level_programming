#include "main.h"

/**
 * prime - evaluates 1 to n
 * @i: equal to n
 * @j: iterates fom 1 to n
 * Return: 1 on success -1 on error
 */

int prime(int i, int j)
{
	if (i == j)
	return (1);
	else if (i % j == 0)
	return (0);
	return (prime(i, j + 1));
}

/**
 * is_prime_number -  returns the input integer is a prime number
 * @n: input integer
 * Return: 1 if valid otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}

