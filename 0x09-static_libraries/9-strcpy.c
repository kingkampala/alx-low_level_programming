#include "main.h"

/**
 * _strcpy - copy string, including \0
 * @dest: a buffer to copy the string to
 * @src: a source string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
