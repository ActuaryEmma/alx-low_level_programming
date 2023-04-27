#include "lists.h"
/**
  * list_len - returns number of elements ina linked list
  * @h: pointer to the list if elements
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	/* count keep the number of elements present*/
	int count = 0;

	/* only count the elements when h != NULL*/
	while (h != NULL)
	{
		h = h->next;
		count++;

	}
	return (count);
}
