#include "variadic_functions.h"

/**
 * print_strings - print strings
 * followed by a new line
 * @separator: string to be printed
 * @n: number of strings passed
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list kampala;
	unsigned int x;
	char *king;

	va_start(kampala, n);
	for (x = 0; x < n; x++)
	{
		king = va_arg(kampala, char *);
		if (!king)
			printf("(nil)");
		else
		{
			printf("%s", king);
			if (x < n - 1 && separator)
				printf("%s", separator);
		}
	}
	va_end(kampala);
	printf("\n");
}
