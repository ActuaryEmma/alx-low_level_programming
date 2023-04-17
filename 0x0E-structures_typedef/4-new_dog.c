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
	dog_t *new_dog;
	char *dog_name, *dog_owner;
	int count = 0;
	int count2 = 0;
	int i, j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		count++;
	dog_name = malloc(sizeof(count + 1));
	if (dog_name == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		dog_name[i] = name[i];
	}

	for (j = 0; owner[j] != '\0'; j++)
	{
		count2++;
	}
	dog_owner = malloc(sizeof(count2 + 1));
	if (dog_owner == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < count2; j++)
	{
		dog_owner[j] = owner[j];
	}
	new_dog->name = dog_name;
	new_dog->age = age;
	new_dog->owner = dog_owner;
	return (new_dog);
}

