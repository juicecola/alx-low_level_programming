#include "main.h"

/**
 * puts_half - main function
 * str: contains string
 * description: prints half of a string
 * return: 0 on success
 */

void puts_half(char *str)
{
int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
