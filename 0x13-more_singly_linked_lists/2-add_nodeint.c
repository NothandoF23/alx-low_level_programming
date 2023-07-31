#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include<string.h>
/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to the list structure
 * @n: new numeric node
 * Return: Address of new element, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
