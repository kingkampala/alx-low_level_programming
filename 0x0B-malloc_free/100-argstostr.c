#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguement count
 * @av: arguement vector
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int a, b, x = 0, y = 0;

	if (ac == 0 || (!av))
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			y++;
		y++;
	}
	y++;
	ptr = malloc(sizeof(char) * y);
	if (!ptr)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[x++] = av[a][b];
		}
		ptr[x++] = '\n';
	}
	ptr[x] = '\0';
	return (ptr);
}
