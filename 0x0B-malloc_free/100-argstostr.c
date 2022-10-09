#include "main.h"


/**
 * len - return length of string
 * @string: string
 * Return: length of string
 */


int len(char *string)
{
	int len = 0;

	if (string != NULL)
	{
		while (string[len])
		len++;
	}
	return (len);
}


/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count of argument
 * @av: array of arguments
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int k = 0, i = ac, j, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
		sum += (len(av[ac]) + 1);
	str = (char *) malloc(sum + 1);

	if (str != NULL)
	{
	while (k < i)
	{
		for (j = 0; av[k][j] != '\0'; j++)
			str[j + temp] = av[k][j];
		str[temp + j] = '\n';
		temp += (j + 1);
		k++;
	}
	str[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (str);
}

/**
 * len - return length of string
 * @str: string
 * Return: length of string
 */


