#include "lists.h"

/**
 * list_len - function to compute length of a list
 * @h: list pointer
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
