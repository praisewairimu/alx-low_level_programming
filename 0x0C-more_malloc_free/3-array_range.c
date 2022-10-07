#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.c
 * @main: first integer number
 * @max: last integer number
 *
 * return:  pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, 1;
	int *a;

	if (min > max)
		return (NULL);
	1 = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; < 1; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}

