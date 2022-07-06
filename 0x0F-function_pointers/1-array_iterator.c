#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * given as a parameter on each element of an array
 * @array: array integer
 * @size: array size
 * @action: pointer function
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		for (x = 0; x < size; x++)
			action(array[x]);
}
