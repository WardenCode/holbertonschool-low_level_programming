#include "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: int to print
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int i = n;
	
	if (n < 0)
	{
		_putchar('-');
	}

	if (i / 10)
		print_number(i / 10);

	_putchar('0' + (i % 10));
}
