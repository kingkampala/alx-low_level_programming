#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times to print '\'
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int y, z;

	if (n <= 0)
		_putchar('\n');
	for (y = 0; y < n; y++)
	{
		for (z = 0; z < y; z++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
