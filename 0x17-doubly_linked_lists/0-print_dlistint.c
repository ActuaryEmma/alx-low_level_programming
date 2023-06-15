#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * print_dlistint - prints elements in a list
  * @h: pointer to the head
  * Return: number of elements
  */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	const dlistint_t *current;

	current = h;

	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
