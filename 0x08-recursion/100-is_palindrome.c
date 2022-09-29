#include "main.h"

/**
 * pald1 - obtains length
 * @a: string
 * @l: integer to conut length
 * Return: 1 on success -1 on error
 */

int pald1(char *a, int l)
{
	if (*a == 0)
	return (l - 1);
	return (pald1(a + 1, l + 1));
}

/**
 * pald2 - compares string vs string reverse
 * @a: string
 * @l: length
 * Return: 1 0n success -1 on errno
 */

int pald2(char *a, int l)
{
	if (*a != *(a + 1))
	return (0);
	else if (*a == 0)
	return (1);
	return (pald2(a + 1, l - 2));
}

/**
 * is_palindrome -  function that returns a string is a palindrome
 * @s: string
 * Return: 1 for success 0 if void
 */
int is_palindrome(char *s)
{
	int l;

	l = pald1(s, 0);
	return (pald2(s, l));
}
