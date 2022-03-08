#include "dog.h"

/**
 * free_dog - Frees dogs.
 *
 * @d: Pointer to a struct of dog (A dog to free).
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->owner)
		free(d->owner);
	if (d->name)
		free(d->name);
	free(d);
}
