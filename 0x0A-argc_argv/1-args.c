#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
