#include "main.h"
#include <stddef.h>

/**
 * custom_strpbrk - Search first presence of character in 'accept' in 's'.
 * @s: The input string to search.
 * @accept: The characters to search for in 's'.
 * Return: Pointer to  matching character in 's, or NULL if missing.
 */
char *custom_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
		if (*s == accept[k])
		return (s);
	}
	s++;
	}

	return NULL;
}
