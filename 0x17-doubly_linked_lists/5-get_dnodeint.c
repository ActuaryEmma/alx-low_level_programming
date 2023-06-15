#include "lists.h"

/**
  * get_dnodeint_at_index - return the nth node
  * @head: pointer to the first node
  * @index: index of the node to return
  * Return: nth node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; temp != NULL; i++)
		{
			if (i == index)
			{
				return (temp);
			}
			temp = temp->next;
		}
	}
	return (0);
}

