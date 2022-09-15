#include "main.h"

int print_last_digit(int b)
{
  int a;
  a = b % 10;

  if (a < 0)
    {
      a *= -1;
    }
  _putchar(a + '0');
  return (a);
    }
