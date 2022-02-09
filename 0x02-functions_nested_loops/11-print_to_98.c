#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @num: delimiter (decides if the iterator add or substract)
 *
 * Return: void
 */

void print_to_98(int num)
{
	int i;

	if (num > 98)
	{
		for (i = num; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (num < 98)
	{
		for (i = num; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}

	if (i == 98 || num == 98)
	{
		printf("%d", 98);
	}

	printf("\n");
}
