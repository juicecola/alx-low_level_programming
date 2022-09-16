#include "main.h"

/**
 * print_line - prints a straight line
 * @n: integer determining lines to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
