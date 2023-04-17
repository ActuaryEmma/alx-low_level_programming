#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints the variables
 * @d: pointer pointing to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
/* check if pointer d is pointing to null i.e not a valid memory address */
	if (d == NULL)
	{
		return;
	}
	/* check if name is null and  assign nil else otherwise */
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\n", d->name);
	/**
	  *if (d->age == 0)
	  *printf("Age: (nil)\n");
	  *else
	  *printf("Age: %f\n", d->age);
	  */
	printf("Age: %f\n", d->age);

	/* check if owner is null and  assign nil else otherwise */
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Owner: %s\n", d->owner);
}
