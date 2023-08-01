#include "lists.h"

/**
 * free_listint - frees a constructed linked list
 * @head: list ptr to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}

}
