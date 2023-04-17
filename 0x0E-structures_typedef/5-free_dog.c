#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free the memory allocated for struct dog.
 * @d: input struct dog to be freed
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
