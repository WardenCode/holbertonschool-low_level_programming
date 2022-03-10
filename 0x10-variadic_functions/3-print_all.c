#include "variadic_functions.h"

/**
 * print_all - Print any type
 *
 * @format: List of types of arguments passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list argument;
	unsigned int i = 0;
	char *tmp;

	va_start(argument, format);
	while (format[i] && format)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(argument, int));
			break;
		case 'i':
			printf("%d", va_arg(argument, int));
			break;
		case 'f':
			printf("%f", va_arg(argument, double));
			break;
		case 's':
			tmp = va_arg(argument, char *);
			if (!tmp)
			{
				printf("(nil)");
				break;
			}
			printf("%s", tmp);
			break;
		default:
			i++;
			continue;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	va_end(argument);
	putchar(10);
}
