#include "lists.h"
/**
  * add_dnodeint_end - add new node at the end
  * @head: pointer to the head of the list
  * @n: data in the list
  * Return: address of te new element
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
		dlistint_t *newnode, *temp;

		temp = *head;

		newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

		if (newnode == NULL)
		{
				return (NULL);
		}
		newnode->n = n;

		newnode->next = NULL;
		newnode->prev = NULL;

		if (*head == NULL)
		{
				*head = newnode;
		}
		else
		{
				while (temp->next != NULL)
				{
						temp = temp->next;
				}
				temp->next = newnode;
				newnode->prev = temp;
		}
		return (newnode);
}
