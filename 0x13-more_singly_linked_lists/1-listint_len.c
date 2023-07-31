#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: pointer to the list structure
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	listint_t const *temp = h;

	i = 0;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

