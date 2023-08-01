#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: first node
 *
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodeValue;
	if (!(*head) || !head)
	{
		return (0);
	}
	nodeValue = (*head)->n;
	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return (nodeValue);
}
