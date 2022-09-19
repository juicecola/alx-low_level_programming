#include "main.h"

/**
 * _puts - main function
 * @str: contains string
 * description: function that prints a string followed by a new line
 * return: 0 on suceess
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
