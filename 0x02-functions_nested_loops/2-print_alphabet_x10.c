#include "main.h"

void print_alphabet(void)
{
        int a,i;
	
	for (a = 1; a <= 10; a++)
	  {
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	
	_putchar('\n');
           }
}
