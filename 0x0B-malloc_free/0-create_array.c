#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: character to be initialized
 * Return: NULL if size = 0
 * pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	x = 0;
	while (x < size)
	{
		arr[x] = c;
		x++;
	}
	return (arr);
}
