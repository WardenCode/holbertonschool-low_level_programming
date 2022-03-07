#include "stdio.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: The struct of dog
 *
 * @name: Name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
	return;
}
