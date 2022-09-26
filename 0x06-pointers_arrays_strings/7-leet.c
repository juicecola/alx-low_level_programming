#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string
 * Return: str
 */

char *leet(char *str)
{
	int i, j;

	char *a = "aeotlAEOTL";
	char *b = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
