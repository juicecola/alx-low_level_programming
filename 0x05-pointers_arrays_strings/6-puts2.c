#include "main.h"

/**
 * puts2 - main function
 * @str: contains string
 * description:  prints every other character of a string
 * return: 0 on success
 */

void puts2(char *str)
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
