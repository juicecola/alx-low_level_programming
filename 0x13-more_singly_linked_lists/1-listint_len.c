#include "lists.h"

/**
 * listint_len -  function that returns the number of elements in a linked list
 * @h: pointer to the head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return nodes;
}
