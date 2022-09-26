#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: void
 */

char *cap_string(char *str)
{
	int i, j, f;
	char sep[] = ",\t;\n; .!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		f = 0;
		if (i == 0)
		{
			f = 1;
		}
		else
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (str[i - 1] == sep[j])
				{
					f = 1;
					break;
				}
			}
		}

		if (f == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
return (str);

}
