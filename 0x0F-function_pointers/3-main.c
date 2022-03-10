#include "3-calc.h"

/**
 * main - Do the basic operations (+, -, *, /, %)
 *
 * @c: Number of arguments
 *
 * @v: Vector of arguments
 *
 * Return: The result of an basic operation (+, -, *, /, %)
 */

int main (int argc, char *argv[])
{
	int num1 = atoi(argv[1]), num2 = atoi(argv[3]), result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);

	return (0);
}
