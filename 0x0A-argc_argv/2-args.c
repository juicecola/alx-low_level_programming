#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc:  indicates how many arguments were entered on the command line
 * @argv: contains the arguments passed to a program through the command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", *argv[i]);
	}
	return (0);
}
