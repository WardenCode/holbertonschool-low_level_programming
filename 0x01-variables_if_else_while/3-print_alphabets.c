#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Description: Prints the alphabet in lowercase and uppercase
 * followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar(10);
	return (0);
}
