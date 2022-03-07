#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Basic atributtes of a dog
 *
 * @name: Name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/* dog_t *new_dog(char *name, float age, char *owner); */
/* void free_dog(dog_t *d); */

#endif /* DOG_H */
