#include "main.h"

/**
 * custom_atoi - Convert a string into an integer.
 * @s: The string to be converted.
 * Return: The resulting integer.
 */
int custom_atoi(char *s)
{
	int sign = 1, index = 0;
	unsigned int result = 0;

	while (!(s[index] >= '0' && s[index] <= '9') && s[index] != '\0')
	{
	if (s[index] == '-')
		sign *= -1;
	index++;
	}

	while (s[index] >= '0' && s[index] <= '9' && s[index] != '\0')
	{
	result = (result * 10) + (s[index] - '0');
	index++;
	}

	result *= sign;
	return (result);
}
