#include "lists.h"
/**
  * pop_listint - delete the head node and returns the head nodes data (n).
  * @head: double pointer
  * Return: returns the head node's data (n), if empty return 0
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(temp);
	return (temp->n);
}
