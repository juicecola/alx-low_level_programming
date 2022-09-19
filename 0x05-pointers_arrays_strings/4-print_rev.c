#include "main.h"

/**
 * print_rev - main function
 * @s: contain the string
 * description: prints string in reverse
 * return: 0 on success
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
