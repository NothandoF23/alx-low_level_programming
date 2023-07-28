#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include<string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the list structure
 * @str: new string
 * Return: Address of new element, NULL otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last;
	unsigned int i = 0;

	last = *head;
	while (str[i])
	{
		i++;
	}

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = NULL;

	if (last == NULL)
	{
		last = newNode;
		return (newNode);
	}

	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;

	return (newNode);

}
