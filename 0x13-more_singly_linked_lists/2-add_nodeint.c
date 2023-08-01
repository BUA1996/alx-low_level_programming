#include "lists.h"

/**
 * add_nodeint - function to add new node at beginning
 * @head: pointer to the first node
 * @n: data
 * Return: new node list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
