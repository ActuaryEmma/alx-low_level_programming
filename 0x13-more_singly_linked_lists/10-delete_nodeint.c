#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a listint_t 
  * @head: double pointer
  * @index: position of the node to be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = *head, *previous;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1 && temp != NULL; i++)
	{
		previous = temp;
		temp = temp->next;
	}
	previous->next = temp->next;
	free(temp);
	return (1);
}


