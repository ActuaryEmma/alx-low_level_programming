#include "lists.h"

/**
  * delete_dnodeint_at_index - delete the node at index index
  * @head: pointer to head of the list
  * @index: index of the node to delete
  * Return: 1 on success, -1 if it fails
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *previous;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp != NULL; i++)
	{
		previous = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	previous->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = previous;
	free(temp);

	return (1);
}

