#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line
 * @argc: int and stores number of command-line arguments passed
 * @argv: contains the arguments passed to a program through the command line
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
