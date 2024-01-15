#include "main.h"

/**
 * custom_strspn - The length of prefix substring with characters in 'accept'.
 * @s: The input string.
 * @accept: The characters to search for in 's'.
 * Return: The characters at the beginning of 's' that are found in 'accept'.
 */
unsigned int custom_strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

	while (*s)
	{
	for (r = 0; accept[r]; r++)
	{
		if (*s == accept[r])
		{
		n++;
		break;
		}
	else if (accept[r + 1] == '\0')
		return (n);
	}
	s++;
	}

	return (n);
}
