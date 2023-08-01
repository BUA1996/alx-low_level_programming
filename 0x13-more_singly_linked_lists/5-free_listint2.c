#include "lists.h"

/**
 * free_listint2 - frees a linked list and set the head to null
 * @head: head ptr
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}
	*head = NULL;

}
