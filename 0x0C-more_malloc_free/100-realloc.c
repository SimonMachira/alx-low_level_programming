#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  allocation a memory using mem block
 * @ptr: ks ks
 * @old_size: ks ks
 * @new_size: ks ks
 *
 * Return: ksl
 */

void *realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return(ptr)'

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
		return (NULL)
	for (i = 0; i < old_size && i <new_sie; i++)
	{
		nptr(i) = ((Char *) ptr)[i];
	}

	free (prt);
	return (nptr);
}
