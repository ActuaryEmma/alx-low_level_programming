#include "lists.h"
/**
  * print_listint - prints all the elements
  * @h: pointer
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (!h->n)
		{
			return (0);
		}
		else
		{
			_putchar(h->n + '0');
			_putchar('\n');
			h = h->next;
		}
		i++;
	}
	return (i);
}
