#include "main.h"

/**
 * custom_strncat - Concatenate two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate.
 * Return: Pointer to the destination string.
 */
char *custom_strncat(char *dest, char *src, int n)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index] != '\0')
	{
	dest_index++;
	}

	while (src_index < n && src[src_index] != '\0')
	{
	dest[dest_index] = src[src_index];
	dest_index++;
	src_index++;
	}

	dest[dest_index] = '\0';

	return (dest);
}
