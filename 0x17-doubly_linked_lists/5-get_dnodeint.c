#include "lists.h"
/**
 * get_dnodeint_at_index - print the nth node of a dlistint
 * @head: head ptr
 * @index: starting index
 * Return: nth node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int point;
	dlistint_t *ptr;

	point = 0;
	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr)
	{
		if (index == point)
			return (ptr);
		point++;
		ptr = ptr->next;
	}
	return (NULL);
}
