#include "lists.h"
/**
  * listint_len - return the number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (!h->n)
		{
			return (0);
		}
		h = h->next;
		i++;
	}
	return (i);
}

