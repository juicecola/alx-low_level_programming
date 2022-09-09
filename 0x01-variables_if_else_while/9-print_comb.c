#include <stdio.h>

int main(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		
			putchar((num1 % 10) + '0');
			
			if (num1 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	

	putchar('\n');

	return (0);
}
