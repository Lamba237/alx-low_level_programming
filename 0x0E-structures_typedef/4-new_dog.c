#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - creates a dog
 *@name: pointerto name of dog
 *@age: new dog's age
 *@owner: new dog owner's name
 *Return: pointer to a new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen;
	int ownerlen;
	int i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	namelen = ownerlen = 0;
	while (name[namelen++])
		;
	while (owner[ownerlen++])
		;
	d1->name = malloc(namelen * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(ownerlen * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= ownerlen; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
