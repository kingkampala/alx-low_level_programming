#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0', i++)
	{
		if (s1[i] != s2[i])
		{
			x = 1;
			break;
		}
	}
	if (x == 0)
		printf("same");
	else
		printf("not same");
	
	return (0);
}
