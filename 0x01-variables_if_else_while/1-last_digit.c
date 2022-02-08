#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Indicates if the last digit of a random number is positive or negative
 *
 * Description: Indicates if the last digit of a random number.
 * Is positive or negative
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int last_digit;
	char first[15] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit == 0)
		printf("%s %d is %d and is 0\n", first, n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("%s %d is %d and is less than 6 and not 0\n", first, n, last_digit);
	else
		printf("%s %d is %d and is greater than 5\n", first, n, last_digit);

	return (0);
}
