#include <stdio.h>

int main(void)
{
char ch = 'a';
while(ch <= 'z')
{
  putchar(ch);
  putchar('\n');
  ch++;
}
return 0;
}
