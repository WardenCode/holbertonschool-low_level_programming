#include "main.h"

/**
 * print_square - Prints a square.
 *
 * @size: ampount of "#"
 *
 * Return: Void
 */

void print_square(int size)
{
	int i, j;

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
