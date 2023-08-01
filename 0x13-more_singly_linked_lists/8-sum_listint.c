#include "lists.h"

/**
 * sum_listint - function to compute sum of list data
 * @head: head ptr
 * Return: sum of all data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
