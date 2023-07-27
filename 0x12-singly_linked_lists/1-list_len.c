#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function to compute length of a list
 * @h: list pointer
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
