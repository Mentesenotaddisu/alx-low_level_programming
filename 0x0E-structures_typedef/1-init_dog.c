#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - entr
 * @d: ..
 * @name: ..
 * @age: ..
 * @owner: ..
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
