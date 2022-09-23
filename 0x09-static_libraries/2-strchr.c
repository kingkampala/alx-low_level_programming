#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @c: character to check for occurence
 * @s: string pointed to by the argument
 * Return: pointer to the first occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
