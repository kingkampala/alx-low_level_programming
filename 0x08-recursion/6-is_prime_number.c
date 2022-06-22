#include "main.h"

int is_prime_number(int n);
int is_prime(int a, int b);

/**
 * is_prime_number - detects if an input number is a prime number
 * @n: input number
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
/**
 * is_prime - detects if an input number is a prime number
 * @a: int type
 * @b: int type
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int is_prime(int a, int b)
{
	if (b < a)
	{
		if (a % b == 0)
		{
			return (0);
		}
		return (is_prime(a, b + 1));
	}
	return (1);
}
