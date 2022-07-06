#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 * Return: diff of integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: prod of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div divide two integers
 * @a: first integer
 * @b: second integer
 * Return: division of integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - module of integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
