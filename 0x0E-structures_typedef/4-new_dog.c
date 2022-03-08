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
	dog_t *new_dog;
	int i, size_name = 0, size_owner = 0;

	for (i = 0; name[i]; i++)
		;
	size_name = i + 1;

	for (i = 0; owner[i]; i++)
		;
	size_owner = i + 1;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(size_name * sizeof(char));
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(size_owner * sizeof(char));
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= size_name; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	for (i = 0; i <= size_owner; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
