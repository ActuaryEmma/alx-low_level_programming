#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
  * print_dog -  prints the variables
  * @d: pointer pointing to struct dog
  * Return: void
  */
void print_dog(struct dog *d)
{
/* check if pointer d is pointing to null i.e not a valid memory address */
	if (d == NULL)
	{
		printf("NULL");
	}
	/* check if elements are null to return nil else otherwise */
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
