#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 * @argc: indicates how many arguments were entered on the command line
 * @argv: contains the arguments passed to a program through the command line
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
