#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements to allocate space for.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
		int i = 0, l = 0;
		char *p;

		if (nmemb == 0 || size == 0)
			return (NULL);

		l = nmemb * size;
		p = malloc(l);

		if (p == NULL)
			return (NULL);

		while (i < l)
		{
			p[i] = 0;
			i++;
		}

		return (p);
}
