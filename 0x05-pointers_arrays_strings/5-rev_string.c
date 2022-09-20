#include "main.h"

/**
 * rev_string - main function
 * @s: contains string
 * description: function that reverses a string
 * return: 0  on sucess
 */

void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	for (; s[i] != '\0'; i++)
		;
	for (j = 0; j < (i / 2); j++)
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = tmp;
	}
}
