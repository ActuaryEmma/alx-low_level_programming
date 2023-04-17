#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * init_dog - initializes a variable
  * @d: pointer to struct dog variables
  * @name: first variable
  * @age: second variable
  * @owner: third variable
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}


