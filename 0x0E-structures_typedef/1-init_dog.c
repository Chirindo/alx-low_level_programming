#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - intilizes a variable of type struct dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
