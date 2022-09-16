#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: diagonal length
 * Return: void
 */
void print_diagonal(int n)
{
	int l, w;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (w = 0; w < l; w++)
				_putchar(' ');

			_putchar('\\');

			if (l == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
