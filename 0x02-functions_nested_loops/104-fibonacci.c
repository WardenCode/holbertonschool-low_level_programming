#include "main.h"

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1, b = 2, sum = 0, counter = 0;

	printf("%lu, %lu, ", a, b);

	while (counter < 96)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (counter != 95)
			printf("%lu, ", sum);
		else
			printf("%lu\n", sum);
		counter++;
	}
	return (0);
}
