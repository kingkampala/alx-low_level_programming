#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except for e and q
 *
 * Return: Always 0
 */
int main(void)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
