#include "main.h"

/**
 * custom_strcmp - Compare two strings lexicographically.
 * @s1: The first string.
 * @s2: The second string.
 * Return: The difference between the ASCII values of the first differing characters.
 */
int custom_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}

	return 0;
}
