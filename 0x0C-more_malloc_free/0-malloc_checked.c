#include "main.h"
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: size on bytes
 *
 * Return: A pointer to the allocate memory,
 * otherwise exit the program with status 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (b >= UINT_MAX || b == 0)
		exit(98);

	p = malloc(b);
	if (!p)
	{
		free(p);
		exit(98);
	}

	return(p);
}
