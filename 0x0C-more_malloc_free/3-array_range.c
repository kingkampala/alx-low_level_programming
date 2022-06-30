#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum array of integers
 * @max: maximum array of integers
 * Return: pointer to the newly created array
 * NULL if min > max, NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int x, y;

	if (min > max)
		return (NULL);

	y = (max - min) + 1;
	arr = malloc(sizeof(*arr) * y);

	if (!arr)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		arr[x] = min;
	return (arr);
}
