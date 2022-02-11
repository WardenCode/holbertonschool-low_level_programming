#include "main.h"

/**
 * print_triangle - Print a triangle.
 *
 * @size: Size of the triangle
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int lines, symbol, spaces;

	if (size > 0)
	{
		for (lines = 0; lines < size; lines++)
		{
			for (spaces = size - lines; spaces > 1; spaces--)
			{
				_putchar(' ');
			}

			for (symbol = 0; symbol <= lines; symbol++)
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
