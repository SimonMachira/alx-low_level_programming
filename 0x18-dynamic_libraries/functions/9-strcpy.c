#include "main.h"
/**
 * char *_strcpy - Program to copy string pointed by src
 * @dest: copy to this
 * @src: copy from here
 * Return: value of the string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
