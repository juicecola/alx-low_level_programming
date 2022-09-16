#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for ((b = size - a); b > 0; b--)
				_putchar(' ');

			for (b = 0; b < b; b++)
				_putchar('#');

			if (b == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
