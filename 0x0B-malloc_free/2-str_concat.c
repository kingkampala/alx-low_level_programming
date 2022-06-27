#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure, pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size1;
	int size2;
	int x, y;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	ptr = malloc(sizeof(char) * ((size1) + (size2 + 1)));

	if (!ptr)
		return (NULL);

	for (x = 0; x < size1; x++)
		ptr[x] = s1[x];

	for (y = 0; y < (size2 + 1); y++)
		ptr[x + y] = s2[y];

	return (ptr);
}
