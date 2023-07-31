#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include<string.h>
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: pointer to the list structure
 * @n: new numeric node
 * Return: Address of new element, NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *last;

	last = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		(*head) = newNode;
		return (newNode);
	}

	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;

	return (newNode);

}
