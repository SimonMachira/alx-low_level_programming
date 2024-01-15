#include "main.h"

/**
 * custom_strlen - Calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int custom_strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	return (length);
}
