#include "lists.h"

/**
 * sum_dlistint - prints the sum of all the data in a list
 * @head: head ptr
 * Return: sums up all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data;

	sum_data = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_data += head->n;
			head = head->next;
		}
	}
	return (sum_data);
}
