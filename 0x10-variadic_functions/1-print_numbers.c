#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * followed by a new line
 * @separator: string to be printed
 * @n: number of integers passed
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list kampala;
	unsigned int x;

	va_start(kampala, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(kampala, unsigned int));
		if (x < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(kampala);
	printf("\n");
}
