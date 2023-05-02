#include "lists.h"
/**
  * print_listint_safe - prints a listint_t linked list
  * @head: pointer
  * Return: number of nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;

	size_t count = 0, i = 0;

	if (head == NULL)
	{
		exit(98);
	}

	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;

	}
	return (count);
}
