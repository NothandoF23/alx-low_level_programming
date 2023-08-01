#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: pointer to the first node
 *
 * Return: the sum of node values or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (listint_len(const(head)) > 0)
	{
		while (head)
		{
			sum = head->n;
			head = head->next;
		}
		return (sum);
	}

	return (0);
}
