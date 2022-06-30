#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: size in bytes for old memory
 * @new_size: size in bytes for new memory
 * Return: pointer to newly allocated memory or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ppttrr, *abc;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	ppttrr = malloc(new_size);
	abc = ptr;

	if (old_size > new_size)
		old_size = new_size;
	for (x = 0; x < old_size; x++)
		ppttrr[x] = abc[x];
	free(ptr);
	return (ppttrr);
}
