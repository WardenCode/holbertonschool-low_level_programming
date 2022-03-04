#include "main.h"

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
	unsigned int i = 0;

	if (original_ptr == NULL)
	{
		resize_ptr = malloc(new_size);
		if (!resize_ptr)
			return (NULL);
		return (resize_ptr);
	}

	if (new_size == 0 && original_ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size || old_size > new_size)
		return (ptr);

	if (new_size > old_size)
	{
		resize_ptr = malloc(new_size);

		if (!resize_ptr)
			return (NULL);

		for (; i < old_size; i++)
			resize_ptr[i] = original_ptr[i];

		for (; i < new_size; i++)
			resize_ptr[i] = 0;
		free(ptr);
	}
	return (resize_ptr);
}
