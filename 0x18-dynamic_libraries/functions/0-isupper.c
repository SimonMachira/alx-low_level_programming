#include "main.h"
/**
 * _isupper - Check if character is uppercase letters
 * @c: character being checked
 * Return: return 1 if @c is upperccase letter, otherwise return 0
 */
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
			return (1);
		return (0);
}
