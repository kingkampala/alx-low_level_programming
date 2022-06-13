#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i = 0, k = 0, j;

	while (str[i++])
		k++;

	if ((k % 2) == 0)
		j = k / 2;

	else
		j = (k + 1) / 2;

	for (i = j; i < k; i++)
		_putchar(str[i]);

	_putchar('\n');
}
