#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the first node of the linked list
 * @index: index of the node we want
 * Return: the node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	i = 0;

	while (temp && i < index)
	{
		i++;
		temp = temp->next;
	}
	if(temp != NULL)
	{	
		return (temp);
	}

	return (NULL);
}
