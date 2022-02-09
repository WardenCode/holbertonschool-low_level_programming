#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: Number recevied
 *
 * Return: return the last digit of a number
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;

	if (n == -2147483648)
		last_digit = 8;

	_putchar('0' + last_digit);

	return (last_digit);
}
