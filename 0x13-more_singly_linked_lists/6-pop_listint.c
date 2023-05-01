#include "lists.h"
/**
  * pop_listint - delete the head node and returns the head nodes data (n).
  * @head: double pointer
  * Return: returns the head node's data (n), if empty return 0
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data_n;

	temp = *head;
	/* if head is NULL return zero */
	if (*head == NULL)
	{
		return (0);
	}
	/* point to the next node when nt empty */
	*head = (*head)->next;
	/* data_n store the value that was deleted */
	data_n = temp->n;
	/* free the memory of the value that was deleted*/
	free(temp);
	/*return the value of the deleted head node*/
	return (data_n);
}
