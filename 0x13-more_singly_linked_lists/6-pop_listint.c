#include "lists.h"
/**
  * pop_listint : delete the head node and returns the head nodes data (n).
  * @head: double pointer
  * Return: returns the head node's data (n), if empty return 0
  */
int pop_listint(listint_t **head)
{
	listint *temp;
	temp = *head;
	if (*head == NULL)
	{
		temp->next = NULL;
	}

	*head = temp->next;
	free(temp);


