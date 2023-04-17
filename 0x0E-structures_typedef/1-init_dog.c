#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Intializes variable of type 'struct dog'.
 * @d: input pointer to struct dog
 * @name: input name of the dog
 * @age: input age of the dog
 * @owner: input owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
