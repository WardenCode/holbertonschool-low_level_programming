#include "main.h"

/**
 * more_numbers - Print 10 times the numbers, from 0 to 14.
 *
 * Return: Void
 */

void more_numbers(void)
{
	int i, j, tmp;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			tmp = j;
			if (j > 9)
			{
				_putchar('1');
				tmp -= 10;
			}
			_putchar('0' + tmp);
		}
		_putchar('\n');
	}
}
