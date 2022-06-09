#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, 0 to 14, followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int c, d;

	for (d = 0; d < 10; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
