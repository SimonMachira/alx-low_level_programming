#include "main.h"

/**
 * custom_strchr - Locate the first occurrence of a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 * Return: Pointer to first occurrence of the character or NULL if not found.
 */
char *custom_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	if (s[i] == c)
		return (&s[i]);
	}

	return (0);
}
