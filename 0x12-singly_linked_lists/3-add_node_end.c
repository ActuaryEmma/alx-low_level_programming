#include "lists.h"
#include <string.h>
/**
  * *add_node_end - add a new node at the end
  * @head: double pointer
  * @str: pointer to elements to be printed
  * Return: address of the new element or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	int count = 0;
	list_t *temp;

	temp = *head;
	while (str[count])
		count++;

	if (str == NULL)
	{
		return (NULL);
	}
	/* allocate memory of newnode */
	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	/* duplicate str*/
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = count;
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}
	return (*head);
}

