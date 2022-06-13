#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i++])
		j++;

	for (i = j - 1; i >= j / 2; i--)
	{
		temp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = temp;
	}
}
