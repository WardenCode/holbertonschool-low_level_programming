#include "main.h"

/**
 * dont_trust_on_malloc - Free a pointer in case of malloc fails.
 *
 * @pointer: Pointer to test.
 *
 * Return: If all go good return 0 otherwise is 1.
 */

int dont_trust_on_malloc(void *pointer)
{
	if (pointer == NULL)
	{
		free(pointer);
		return (1);
	}
	return (0);
}

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory previously allocated with a call to malloc.
 *
 * @old_size:  Size, in bytes, of the allocated space for ptr.
 *
 * @new_size: The new size, in bytes of the new memory block.
 *
 * Return: The pointer to the newly created array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *original_ptr = ptr;
	char *resize_ptr = NULL;
	unsigned int i;

	if (new_size == old_size || old_size > new_size)
		return (ptr);

	if (original_ptr == NULL && old_size == 0 && new_size > 0)
	{
		resize_ptr = malloc(new_size);
		if (dont_trust_on_malloc(resize_ptr) == 1)
			return (NULL);
		return (resize_ptr);
	}

	if (new_size == 0 && original_ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		resize_ptr = malloc(new_size);
		if (dont_trust_on_malloc(resize_ptr) == 1)
			return (NULL);

		for (i = 0; i < old_size; i++)
			resize_ptr[i] = original_ptr[i];
		/*clear the added places*/
		for (; i < new_size; i++)
			resize_ptr[i] = 0;

		return (resize_ptr);
	}

	return (resize_ptr);
}
