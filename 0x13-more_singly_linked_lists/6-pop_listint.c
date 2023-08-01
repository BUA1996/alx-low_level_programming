#include "lists.h"

/**
 * pop_listint - function to delete head of list
 * @head: head ptr
 * Return: return head not data, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int data;

	if (!head || !*head)
	{
		return (0);
	}

	data = (*head)->n;
	list = (*head)->next;

	free(*head);
	*head = list;

	return (data);
}
