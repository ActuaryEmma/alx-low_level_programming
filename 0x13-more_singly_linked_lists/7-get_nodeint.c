#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of a listint_t
  * @head: pointer to a node
  * @index: index of the node starting at 0
  * Return: nth node of a listint_n ,, if node does not exist return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	unsigned int count = 0;

	for (count = 0; temp != NULL; count++)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (temp);
}

