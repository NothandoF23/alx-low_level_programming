#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linkedlist
 * @head: head of the list
 * @n: The element to be added to the linkedlist
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	new->next = h;
	if (h != NULL)
	{
		h->prev = new;
	}
	*head = new;
	return (new);
}
