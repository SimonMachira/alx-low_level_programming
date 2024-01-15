#include "main.h"

/**
 * custom_strstr - Search for the first occurrence of 'needle' in 'haystack'.
 * @haystack: The string to search within.
 * @needle: The string to search for.
 * Return: Pointer to first instance of 'needle' in 'haystack, NULL if missing.
 */
char *custom_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *l = haystack;
	char *p = needle;

	while (*l == *p && *p != '\0')
		{
		l++;
		p++;
		}

		if (*p == '\0')
		return (haystack);
	}

	return (NULL);
}
