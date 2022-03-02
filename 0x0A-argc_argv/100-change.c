#include "main.h"

/**
 * is_number - Checks if the string is a number or not
 *
 * @string: String to check.
 *
 * Return: 0 if string is a number or 1 if not.
 */

int is_number(char *string)
{
	int j;

	for (j = 0; string[j]; j++)
	{
		if (!(string[j] >= '0' && string[j] <= '9'))
		{
			if (j == 0 && string[j] == '-' && string[j + 1] != '\0')
			{
				continue;
			}
			printf("Error you have to follows the rigth format (numbers)\n");
			return (1);
		}
	}
	return (0);
}

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
	int i, cents = 0, counter = 0, flag;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	flag = is_number(argv[1]);

	if (flag == 1)
		return (1);

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
