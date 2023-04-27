#include "lists.h"
/**
  * free_list - frees a list_t list
  * @head: pointer
  * Return: void
  */
void free_list(list_t *head)
{
	/* temp to store next node */
	list_t *temp;

/* run as long as head is not NULL */
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
