#include "main.h"

/**
 * main - Adds positive numbers.
 *
 * @argc: number of parameters
 *
 * @argv: numbers to add.
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int i, result = 0;
	unsigned int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
