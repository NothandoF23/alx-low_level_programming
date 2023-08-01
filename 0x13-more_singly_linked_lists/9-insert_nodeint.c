#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: pointer to the first node
 * @idx: index of node
 * @n: numeric new node value
 * Return: the number of nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	listint_t *prev;

	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;

		return (newNode);
	}
	temp = *head;
	i = 0;

	while (temp && i < idx)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	newNode->next = temp;
	prev->next = newNode;

	return (newNode);
}

