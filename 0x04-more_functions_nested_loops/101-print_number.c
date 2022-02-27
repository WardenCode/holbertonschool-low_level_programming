#include "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: number to print
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int new_number = 0;

	if (n == -2147483648)
	{
		new_number = n;
		_putchar('-');
		new_number = -new_number;

		if (new_number / 10)
			print_number(new_number / 10);
		_putchar('0' + (new_number % 10));
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}
