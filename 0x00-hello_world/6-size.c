#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long longType;
char charType;
long long longlongType;
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu byte\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longType));
printf("Size of long long: %zu byte\n", sizeof(longlongType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
