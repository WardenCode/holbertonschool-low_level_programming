#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Always return 0
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 57)
		{
			putchar(num);
			putchar(44);
			putchar(8);
		}
		else
		{
			putchar(num);
		}
	}

	return (0);
}
