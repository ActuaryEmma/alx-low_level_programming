#include "lists.h"
#include <string.h>
/**
  * *add_node - add a new node at the beginning of a list
  * @head: double pointer
  * @str: parameter
  * Return: address of a new element of Null if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	/* count will keep address of the new node */
	int count = 0;
	/* create a pointer for the  new node */
	list_t *newnode;

	/* counts the length of str */
	while (str[count])
	{
		count++;
	}
	/* allocate memory for newnode */
	newnode = (list_t *) malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	/* duplicate str and free memory if memory allocation failed*/
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = count;
	/* assign the nodes in the correct order */
	if (*head == NULL)
	{
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
	}
	*head = newnode;

	return (*head);

}


