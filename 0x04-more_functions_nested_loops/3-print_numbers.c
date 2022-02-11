#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int i = '0';

	while(i <= '9') {
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
