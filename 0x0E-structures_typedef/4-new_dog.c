#include "dog.h"

/**
 * new_dog - Creates a new dog.
 *
 * @name: Name of the new dog.
 *
 * @age: Age of the new dog.
 *
 * @owner: Owner of the new dog.
 *
 * Return: Pointer to a new dog or NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *p = &new_dog;
	int i, size_name = 0, size_owner = 0;

	for (i = 0; name[i]; i++)
		;
	size_name = i;

	for (i = 0; owner[i]; i++)
		;
	size_owner = i;

	p->name = malloc(size_name * sizeof(char));
	if (!p->name)
		return (NULL);

	p->owner = malloc(size_owner * sizeof(char));
	if (!p->owner)
	{
		free(p->name);
		return (NULL);
	}

	for (i = 0; i <= size_name; i++)
		p->name[i] = name[i];

	p->age = age;

	for (i = 0; i <= size_owner; i++)
		p->owner[i] = owner[i];

	return (p);
}
