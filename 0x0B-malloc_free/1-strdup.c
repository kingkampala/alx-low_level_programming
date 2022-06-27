#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as a parameter
 * @str: string
 * Return: NULL if str = NULL, pointer on success
 */
char *_strdup(char *str)
{
	char *ptr;
	int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		y++;
	y++;
	ptr = malloc(sizeof(char) * y);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		ptr[x] = str[x];

	return (ptr);
}
