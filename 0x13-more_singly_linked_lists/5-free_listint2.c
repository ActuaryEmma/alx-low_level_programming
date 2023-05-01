#include "lists.h"
/**
  * free_listint2 - free a listint_t
  * @head: double pointer
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;
	ptr = *head;

	while (ptr)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
		

