#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function for freeing the list
 * @head: pointer to list
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
