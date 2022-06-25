#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int love;

	for (love = 0; love < argc; love++)
	{
		printf("%s\n", argv[love]);
	}

	return (0);
}
