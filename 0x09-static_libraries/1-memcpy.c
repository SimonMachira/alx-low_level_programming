#include "main.h"

/**
 * custom_memcpy - Copy a memory area from source to destination.
 * @dest: Pointer to the destination memory.
 * @src: Pointer to the source memory.
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination memory with @n bytes copied.
 */
char *custom_memcpy(char *dest, char *src, unsigned int n)
{
	int index = 0;
	int remaining = n;

	for (; index < n; index++)
	{
	dest[index] = src[index];
	remaining--;
	}

	return (dest);
}
