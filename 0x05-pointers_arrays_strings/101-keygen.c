#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 on Success 
 */
int main(void)
{
	char k;
	int i;

	srand(time(0));
	while (k <= 2645)
	{
		k = rand() % 128;
		i += k;
		putchar(k);
	}
	putchar(2772 - i);
	return (0);
}
