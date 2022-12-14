#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
