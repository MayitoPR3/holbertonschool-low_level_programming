#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes the variable
 * @d: variable
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
