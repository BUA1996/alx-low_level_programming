#include "lists.h"

/**
 * reverse_listint - prints list in reverse
 * @head: head ptr
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev_node = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next;
	}
	*head = prev_node;
	return (*head);
}
