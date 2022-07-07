#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number arguements
 * Return: sum
 * 0, if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list kampala;
	int add = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(kampala, n);

	for (x = 0; x < n; x++)
		sum += va_arg(kampala, int);
	va_end(kampala);
	return (add);
}
