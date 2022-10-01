#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks whether s is an integer
 * @s: string
 * Return: 0 on success 1 on failure
 */

int isInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments passed into your program from the command line
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0, coinx = 0, coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (isInteger(argv[1]))
	{
		i = atoi(argv[1]);
		while (i > 0 && coin <= 4)
		{
			if (i >= coins[coin])
			{
				i -= coins[coin];
				coinx++;
			}
			else
			{
				coin++;
			}
		}
	}
	printf("%i\n", coinx);
	return (0);
}
