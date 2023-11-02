#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Generate an array of integers in a specified range
 * @min: The minimum value in the array
 * @max: The maximum value in the array
 *
 * Return: A pointer to an array of integers, or NULL on failure
 */
int *array_range(int min, int max)
{
		int *a, i = 0;

		if (min > max)
			return (NULL);

		a = malloc(sizeof(int) * (max - min + 1));

		if (a == NULL)
			return (NULL);

		while (min <= max)
		{
			a[i] = min;
			i++;
			min++;
		}

		return (a);
}
