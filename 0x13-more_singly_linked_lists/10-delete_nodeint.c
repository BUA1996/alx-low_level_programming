#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: head ptr
 * @index: index of the node to be deleted
 * Return: 1 for succes and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list = *head;
	listint_t *node = NULL;
	unsigned int p = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(list);
		return (1);
	}
	while (p < index - 1)
	{
		if (!list || !(list->next))
		{
			return (-1);
		}
		list = list->next;
		p++;
	}

	node = list->next;
	list->next = node->next;
	free(node);
	return (1);
}
