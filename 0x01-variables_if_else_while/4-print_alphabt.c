#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase without "q" and "e"
 *
 * Description: Prints the alphabet in lowercase except "q" and "e"
 * followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'q' && lower != 'e')
			putchar(lower);
		lower++;
	}

	putchar(10);
	return (0);
}
