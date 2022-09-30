#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc:  indicates how many arguments were entered on the command line
 * @argv: contains the arguments passed to a program through the command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s \n", *argv++);
	return (0);
}
