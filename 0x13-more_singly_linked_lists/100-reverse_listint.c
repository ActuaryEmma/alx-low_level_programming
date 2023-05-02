#include "lists.h"
/**
  * reverse_listint - reverse a listint_t linked list
  * @head: double pointer
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *next = NULL, *prev = NULL ;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
