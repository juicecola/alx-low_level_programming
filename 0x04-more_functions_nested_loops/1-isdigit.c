#include "main.h"

/**
 * _isdigit - verification whwther integer is a digit
 * @c: integer to be verified
 * Return: 1 on suceess 0 on failure
*/

int _isdigit(int c)

{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

