#include "main.h"

/**
 * main - multiplies two numbers..
 *
 * @argc: number of parameters
 *
 * @argv: numbers to multipy.
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	unsigned int i, j;
	int n1 = 0, n2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < 2; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);
	return (0);
}
