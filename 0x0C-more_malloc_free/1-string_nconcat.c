#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to a newly allocated space in memory
 * NULL, if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int x;
	unsigned int y;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	x = 0;
	while (s1[x] != '\0')
		x++;

	ptr = malloc(sizeof(char) * (x + n + 1));

	if (!ptr)
		return (NULL);

	x = y = 0;

	while (s1[x] != '\0')
	{
		ptr[x] = s1[x];
		x++;
	}
	while (y < n && s2[y] != '\0')
	{
		ptr[x] = s2[y];
		x++, y++;
	}
	ptr[x] = '\0';
	return (ptr);
}
