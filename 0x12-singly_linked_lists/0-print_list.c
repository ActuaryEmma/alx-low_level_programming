#include "lists.h"

/**
  * print_list - prints all elements of a list_t
  * @h: pointer to list that will be printed
  * Return: 0
  */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		for (i = 0; h != NULL; i++)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}

	return (i);
}
