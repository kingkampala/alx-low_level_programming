#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: first integer
 * @size: second integer
 * Return: NULL if nmemb or size is 0
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		ptr[x] = 0;

	return (ptr);
}
