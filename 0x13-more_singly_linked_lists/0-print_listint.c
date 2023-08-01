#include "lists.h"


/**
 * print_listint - function for printing all elements of a list
 * @h: link to the next node
 * Return: elements of a list
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}

	return (elements);
}
