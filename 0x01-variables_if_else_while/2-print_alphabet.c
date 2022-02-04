#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar(10);
	return (0);
}
