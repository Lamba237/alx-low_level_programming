#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - dog function
 *@d: first element
 *@name: second element
 *@age: third element
 *@owner: fourth element
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
