#include <stdio.h>

void kampala(void) __attribute__ ((constructor));

/**
 * kampala - prints a string
 * before the main function is executed
 */
void kampala(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
