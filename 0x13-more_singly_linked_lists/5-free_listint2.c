#include "lists.h"
/**
  * free_listint2 - free a listint_t
  * @head: double pointer
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;
/* if no list to free i. if head is null return */
	if (head == NULL)
	{
		return;
	}
	/* run as long as list is not empty */

	ptr = *head;

	while (ptr)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	/* when list is empty , set head to NULL */
	*head = NULL;
}
