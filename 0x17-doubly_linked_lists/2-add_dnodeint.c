#include "lists.h"
/**
  * add_dnodeint - add new node at the beginning
  * @head: pointer to the head
  * @n: data in the list
  * Return: address of the new element or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
		dlistint_t *newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

		if (newnode == NULL)
		{
				return (NULL);
		}
		newnode->n = n;
		newnode->prev = NULL;

		newnode->next = *head;

		if (*head == NULL)
		{
				newnode->next = NULL;
		}
		else
		{
				(*head)->prev = newnode;
		}

		*head = newnode;
		return (*head);
}
