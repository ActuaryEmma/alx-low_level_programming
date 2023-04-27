#include "lists.h"
/**
  * list_len - returns number of elements ina linked list
  * @h: pointer to the list if elements
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;

	}
	return (count);
}
