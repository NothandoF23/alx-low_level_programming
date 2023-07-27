#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the list structure
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;
	list_t const *temp = h;

	i = 0;
	while (temp)
	{
		i++;
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
	}
	return (i);
}




