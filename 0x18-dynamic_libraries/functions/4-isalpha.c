#include "main.h"

/**
 * custom_isalpha - Check if a character is an alphabetic character (a letter).
 * @c: The character to be checked.
 * Return: 1 if @c is a letter, 0 otherwise.
 */
int custom_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
