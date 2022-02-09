#include "main.h"

/**
 * print_sign - Print +, - or 0 if the number is positive negative or 0.
 * respectively.
 *
 * @n: Number recivied
 *
 * Description: Print +, - or 0 if the number is positive negative or 0.
 * respectively.
 *
 * Return:  1, -1 or 0 if the number is positive negative or 0.
 * respectively.
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
