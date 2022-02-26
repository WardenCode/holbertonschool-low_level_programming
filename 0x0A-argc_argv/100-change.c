#include "main.h"

/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: Cuantity of arguments.
 *
 * @argv: Change of money.
 *
 * Return: 0 if success of 1 if failure.
 */

int main(int argc, char *argv[])
{
	int i, cents = 0, counter = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (cents == 0)
			break;

		if (cents - change[i] >= 0)
		{
			cents -= change[i];
			counter++;
			i--;
		}
	}

	printf("%d\n", counter);

	return (0);
}
