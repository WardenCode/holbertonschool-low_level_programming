#include "main.h"
#include <stdio.h>

/**
 * times_table - Print the last digit of a number
 *
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
		}
		_putchar(10);
	}
}
