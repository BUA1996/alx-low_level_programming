#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: head ptr
 * @idx: index to insert new node
 * @n: data
 * Return: ptr to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list = *head;
	listint_t *new_node;
	unsigned int p;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (p = 0; list && p < idx; p++)
	{
		if (p == idx - 1)
		{
			new_node->next = list->next;
			list->next = new_node;
			return (new_node);
		}
		else
		{
			list = list->next;
		}
	}
	return (NULL);
}
