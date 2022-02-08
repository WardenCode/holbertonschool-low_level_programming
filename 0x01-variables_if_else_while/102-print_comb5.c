#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always return 0
 */

int main(void)
{
	int s1n1 = 48;
	int s1n2 = 48;
	int s2n1 = 48;
	int s2n2 = 49;

	for (s1n1 = 48; s1n1 < 58; s1n1++)
	{
		for (s1n2 = 48; s1n2 < 58; s1n2++)
		{
			for (s2n1 = 48; s2n1 < 58; s2n1++)
			{
				for (s2n2 = 49; s2n2 < 58; s2n2++)
				{
					putchar(s1n1);
					putchar(s1n2);
					putchar(32);
					putchar(s2n1);
					putchar(s2n2);
					if (!(s1n1 == 57 && s1n2 == 56 && s2n1 == 57 && s2n2 == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
