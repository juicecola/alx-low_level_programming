#include "main.h"

/**
 * _atoi - main function
 * @s: pointer to the string
 * description: This function convert a string to an integer
 * return: The integer value of string.
 */

int _atoi(char *s)
{
	unsigned int a = 0, z = 0, p = 0;
	unsigned int k = 1, w = 1, n;

	while (s[a])
	{
		if (z > 0 && (s[a] < '0' || s[a] > '9'))
		{
			break;
		}

		if (s[a] == '-')
		{
			k *= -1;
		}

		if ((s[a] >= '0') && (s[a] <= '9'))
		{
			if (z > 0)
			{
				w *= 10;
			}
			z++;
		}
		a++;
	}

	for (n = a - z; n < a; n++)
	{
		p = p + ((s[n] - 48) * w);
		w /= 10;
	}

	return (p * k);
}
