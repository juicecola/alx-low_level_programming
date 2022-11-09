#include "lists.h"

/**
 * add_nodeint - function that returns the number of elements in a linked list
 * @head: pointer to the head
 * @n: new node
 * Return: adress of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;

	return (*head);
}
