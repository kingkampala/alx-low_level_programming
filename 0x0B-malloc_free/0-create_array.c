#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: character to be initialized
 * Return: pointer to the array or NULL
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
