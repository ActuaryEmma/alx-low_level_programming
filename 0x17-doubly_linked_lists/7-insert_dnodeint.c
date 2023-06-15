#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position
 * @h: pointer to the first node
 * @idx: index of the list where new node should be added
 * @n: data in the list
 * Return: node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current, *previous;

	dlistint_t *newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	current = *h;
	for (i = 0; current != NULL && i < idx; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL && i < idx)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = current;
	newnode->prev = previous;
	previous->next = newnode;
	if (current != NULL)
		current->prev = newnode;
	return (newnode);
}
