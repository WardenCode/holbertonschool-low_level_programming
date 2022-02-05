#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Description: Prints all the numbers of base 16 in lowercase
 * followed by a new line.
 *
 * Return: Always return 0
 */

int main(void)
{
	char base16 = 0x30;

	while (base16 != 0x67)
	{
		if ((base16 >= 0x30 && base16 <= 0x39) || (base16 >= 0x61 && base16 <= 0x66))
		{
			putchar(base16);
		}
		base16++;
	}

	putchar(10);
	return (0);
}
