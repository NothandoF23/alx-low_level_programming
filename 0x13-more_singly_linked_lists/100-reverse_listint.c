#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the first node in the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node;
	listint_t *temp;

	temp = NULL;
	while (*head)
	{
		node = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = node;
	}

	*head = temp;

	return (*head);
}

