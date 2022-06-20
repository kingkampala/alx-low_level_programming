#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * from memory area src to memory area dest
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
