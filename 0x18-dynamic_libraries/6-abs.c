#include "main.h"

/**
 * _abs - prints absolute value of a number
 * @i: number to be checked
 * Return: return 0
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
