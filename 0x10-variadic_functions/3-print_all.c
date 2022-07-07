#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	va_list kampala;
	unsigned int a = 0, b, c = 0;
	char *king;
	const char t_arg[] = "cifs";

	va_start(kampala, format);
	while (format && format[a])
	{
		b = 0;
		while (t_arg[b])
		{
			if (format[a] == t_arg[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(kampala, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(kampala, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(kampala, double)), c = 1;
			break;
		case 's':
			king = va_arg(kampala, char *), c = 1;
			if (!king)
			{
				printf("(nil)");
				break;
			}
			printf("%s", king);
			break;
		} a++;
	}
	va_end(kampala);
	printf("\n");
}
