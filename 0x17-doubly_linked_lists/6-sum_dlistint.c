#include "lists.h"
/**
  * sum_dlistint - return sum of all the data(n)
  * @head: pointer to first node
  * Return: sum of all the data
  */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			count = count + (temp->n);
			temp = temp->next;
		}
	}
	return (count);
}
