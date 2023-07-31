#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list.
 * @h: pointer to the list structure
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	listint_t const *temp = h;

	i = 0;
	while (temp)
	{
		i++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
