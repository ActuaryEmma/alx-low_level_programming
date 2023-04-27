#include "lists.h"

/**
  * print_list - prints all elements of a list_t
  * @h: pointer to list that will be printed
  * Return: 0
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;
/* print as long as h is not null */
	while (h != NULL)
	{
		/* check if h->str is null */
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		/*print if not null*/
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}

	return (i);
}
