#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that prints all the elements of a list_t list
 * @h: pointer to the list structure
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;
	list_t const *temp = h;

	i = 0;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

