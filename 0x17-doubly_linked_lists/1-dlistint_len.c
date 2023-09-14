#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a list
 * @h: head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elements;

	elements = 0;

	while (h->prev !=  NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	if (h == NULL)
	{
		return (elements);
	}
	return (elements);
}
