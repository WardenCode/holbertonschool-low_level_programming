#include "main.h"

/**
 * print_to_98 - Print the last digit of a number
 *
 * @num: number
 *
 * Return: void
 */

void print_to_98(int num)
{
	int i;

	if (98 < num)
	{
		for (i = num; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (98 > num)
	{
		for (i = num; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}

	if (98 == i)
	{
		printf("%d", 98);
	}

	printf("\n");
}
