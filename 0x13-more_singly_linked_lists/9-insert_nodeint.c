#include "lists.h"
/**
  * insert_nodeint_at_index - insert node at any given index
  * @head: double pointer
  * @idx: index of the list where the newnode should be added.Index starts at 0
  * @n: the data to be added
  * Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *temp;

	if (*head == NULL)
	{
		return (NULL);
	}
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}

	newnode->next = temp->next;
	temp->next = newnode;
	return (*head);
}

#include "lists.h"
/**
  * listint_len - return the number of elements
  * @h: pointer to node
  * Return: number of elelments
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (!h->n)
		{
			return (0);
		}
		h = h->next;
		i++;
	}
	return (i);
}
