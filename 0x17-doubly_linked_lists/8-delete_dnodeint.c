#include "lists.h"
/**
  * delete_dnodeint_at_index - delete the node at index index
  * @head: pointer to head of the list
  * @index: pointer index of the node
  * Return: 1 on success , -1 it it fail
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	dlistint_t *temp = *head, *previous = NULL;

	if (head == NULL)
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
	if (temp == NULL)
	{
		return (-1);
	}
	previous->next = temp->next;
	free(temp);
	return (1);
}
