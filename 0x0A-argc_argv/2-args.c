#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: indicates how many arguments were entered on the command line
 * @argv: character pointers listing all the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", *argv++);
		i++;
	}
	return (0);
}
