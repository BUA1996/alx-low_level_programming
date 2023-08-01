#include "lists.h"

/**
 * get_nodeint_at_index - prints the nth index of a node list
 * @head: head ptr
 * @index: node index starting at 0
 * Return: pointer to the node or null if node not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list = head;
	unsigned int p = 0;

	while (list && p < index)
	{
		list = list->next;
		p++;
	}
	return (list ? list : NULL);
}
