#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a linkedlist
 * @head: Head of the linkedlist
 * @index: Index of the node to return
 * Return: node at specified index , else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (temp != NULL)
	{
		if (index == i)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}


