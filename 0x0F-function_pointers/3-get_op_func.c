#include "3-calc.h"

/**
 * _strcmp - Compare a string with another
 *
 * @s1: string.
 *
 * @s2: string.
 *
 * Return: Void
 */

int _strcmp(char *s1, char *s2)
{
	int i, size1, size2;
	int result = 0;

	for (i = 0; s1[i] != '\0'; i++)
		;
	size1 = i;

	for (i = 0; s2[i] != '\0'; i++)
		;
	size2 = i;

	if (size1 != size2)
		return (1);

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
	}

	return (result);
}

/**
 * get_op_func - Validate and get the operation to use.
 *
 * @s: The operator (+, -, *, /, %)
 *
 * Return: The result of the operation, and null otherwise.
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op)
	{
		if (_strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
