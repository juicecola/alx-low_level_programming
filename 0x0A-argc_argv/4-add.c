#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - check whether s is an integer
 * @s: string to check
 * Return: 0 on success 1 on error
 */

int isInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] < '0' || s[i] > '9')
		return (1);
	i++;
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: indicates how many arguments were entered on the command line
 * @argv: contains the arguments passed to a program through the command line
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
