#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include<string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the list structure
 * @str: new string
 * Return: Address of new element, NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int i = 0;

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
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}

