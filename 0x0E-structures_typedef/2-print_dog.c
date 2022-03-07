#include "stdio.h"

/**
 * print_dog - print the attributes of a dog
 *
 * @d: A dog
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	(d->age) ? printf("Age: %f\n", d->age) : printf("Name: (nil)\n");
	(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Name: (nil)\n");
}
