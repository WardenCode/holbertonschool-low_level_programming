#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: ampount of "_"
 *
 * Return: Void
 */

void print_line(int n)
{
	int counter = 0;

	if (n > 0)
	{
		while (counter < n)
		{
			_putchar('_');
			counter++;
		}
	}
	_putchar('\n');
}
