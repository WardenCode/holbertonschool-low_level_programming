#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */

int main(void)
{
	unsigned int a = 1, b = 2, sum = 0, counter = 0;

	printf("%u, %u, ", a, b);

	while (counter <= 50)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%u, ", sum);
		counter++;
	}
	putchar('\n');
	return (0);
}
