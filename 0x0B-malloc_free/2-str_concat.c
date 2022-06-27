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
	int s1, s2;
	int x, y;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (x = 0; s1[x] || s2[x]; x++)
		y++;
	ptr = malloc(sizeof(char) * y);

	if (!ptr)
		return (NULL);

	for (x = 0; x < s1; x++)
		ptr[x] = s1[x];

	for (y = 0; y < (s2 + 1); y++)
		ptr[x + y] = s2[y];

	return (ptr);
}
