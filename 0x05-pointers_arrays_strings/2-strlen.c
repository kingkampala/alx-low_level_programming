#include "main.h"

/**
 * _strlen - returns length of a string
 *@s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
