#include "main.h"


/**
 * evaluate_zero - Evaluate the 0 case.
 *
 * @n: value of n (0)
 *
 * Return: void
 */

void evaluate_zero(int n)
{
	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: number of times to print the table, min-max(1-14)
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n > 0 && n < 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				result = i * j;
				if (j == 0)
				{
					_putchar('0');
					continue;
				}
				_putchar(',');
				_putchar(' ');
				if (result >= 100)
				{
					_putchar('0' + result / 100);
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + result % 10);
				}
				else if (result >= 10 && result <= 99)
				{
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				else if (result < 10 && result >= 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
			}
			_putchar('\n');
		}
	}
	evaluate_zero(n);
}
