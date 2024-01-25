#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a linkedlist
 * @head: head of a linkedlist
 * Return: sum of elements, else 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
