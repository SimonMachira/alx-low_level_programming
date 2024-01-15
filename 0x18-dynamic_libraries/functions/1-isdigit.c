#include "main.h"

/**
 * is_digit - Checking if a character is a digit (0 through 9).
 * @c: The character under check.
 * Return: if @c is a digit return 1, else 0
 */
int is_digit(int c)
{
	return (c >= '0' && c <= '9');
}
