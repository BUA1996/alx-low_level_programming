#include "lists.h"
/**
 * delete_dnodeint_at_index - funct that deletes the node at index
 * @head: ptr to head
 * @index: position to delete from
 * Return: on success 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h2;
	unsigned int i;
	dlistint_t *node1;

	node1 = *head;

	if (node1 != NULL)
		while (node1->prev != NULL)
			node1 = node1->prev;

	i = 0;

	while (node1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = node1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = node1->next;

				if (node1->next != NULL)
					node1->next->prev = h2;
			}

			free(node1);
			return (1);
		}
		h2 = node1;
		node1 = node1->next;
		i++;
	}

	return (-1);
}
