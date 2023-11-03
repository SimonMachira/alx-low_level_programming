#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates memory using a memory block
 * @ptr: pointer to the memory block
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 *
 * Return: pointer to the reallocated memory block
 */

void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	char *nptr;
	size_t i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (nptr);
}
