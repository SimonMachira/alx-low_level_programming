#include "main.h"

/**
 * custom_strncpy - Copy a string up to a specified length.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 * Return: Pointer to the destination string.
 */
char *custom_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index] != '\0')
	{
	dest[index] = src[index];
	index++;
	}

	while (index < n)
	{
	dest[index] = '\0';
	index++;
	}

	return (dest);
}
