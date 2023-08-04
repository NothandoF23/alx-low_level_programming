#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * at a certain index
 * @head: pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: 1 deletion succeeded, -1 if deletion failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		i++;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);

	return (1);
}

