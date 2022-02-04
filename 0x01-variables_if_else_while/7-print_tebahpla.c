#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase also in backwards
 *
 * Description: Prints the alphabet in lowercase also in backwards
 * followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char reverse_lower = 'z';

	while (reverse_lower >= 'a')
	{
		putchar(reverse_lower);
		reverse_lower--;
	}

	putchar(10);
	return (0);
}
