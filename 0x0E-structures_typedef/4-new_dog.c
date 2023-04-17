#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * new_dog - create a new dog
  * @name: first element
  * @age: second element
  * @owner: third element
  * Return: void
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	/*char *dog_name, *dog_owner;*/
	int count = 0;
	int count2 = 0;
	int i, j;

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		count++;
	dog_new->name = malloc(sizeof(char *) * (count + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	/**
	  * for (i = 0; i < count; i++)
	  * dog_new->name[i] = name[i];
	  */
	for (j = 0; owner[j] != '\0'; j++)
		count2++;

	dog_new->owner = malloc(sizeof(char *) * (count2 + 1));
	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}
	/**
	  * for (j = 0; j < count2; j++)
	  * dog_new->owner[j] = owner[i];
	  */
	dog_new->name = name;
	dog_new->age = age;
	dog_new->owner = owner;
	return (dog_new);
}

