#include "main.h"

/**
 * _isdigit - verifies if character is a digit or not
 * @c: character to be checked
 * Return: returns 1 if is digit , 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
