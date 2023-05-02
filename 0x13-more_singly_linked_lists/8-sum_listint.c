#include "lists.h"
/**
  * sum_listint - return the sum of all the data
  * @head: pointer
  * Return: sum of all the data, if empty return 0
  */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;

	int i, count = 0;

	for (i = 0; temp != NULL; i++)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}


