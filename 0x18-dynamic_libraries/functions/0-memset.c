#include "main.h"

/**
 * _memset - Fills a memory block with a specific value
 * @s: starter address of memory to fill
 * @b: the value to fill memory block
 * @n: bytes to change
 * Return: transform array with c bytes new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}

	return (s);
}
