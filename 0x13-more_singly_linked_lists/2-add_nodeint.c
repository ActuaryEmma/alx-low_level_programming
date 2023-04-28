#include "lists.h"
/**
  * add_nodeint - add a node at the beginning
  * @head: double pointer
  * @n: element to be added
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;

	if (*head == NULL)
	{
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
	}
	*head = newnode;
	return (*head);
}

