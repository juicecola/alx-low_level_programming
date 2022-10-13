#include "function_pointers.h"

/**
 * function that prints a name
 * @name: name to be printed
 * @f: pointer to the character to be printed
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
