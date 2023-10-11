#include "dog.h"
#include <stdio.h>
/**
 *init_dog - void function that initializes a structure
 *@d: pointer to structure
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
