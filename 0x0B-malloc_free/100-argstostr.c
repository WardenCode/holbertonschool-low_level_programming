#include "main.h"
#include <stdlib.h>

/**
 * clean_name - Clean the name of the program
 *
 * @av: arg vector
 *
 * Return: Pointer to the name of the program
 */

char *clean_name(char **av)
{
	int count = 0, i = 1;
	char *pointer = *av;
	char *name;

	while (*pointer != '\0')
	{
		count++;
		if (*pointer == '/')
			count = 0;
		pointer++;
	}

	pointer -= count + 1;
	name = malloc((count + 2) * sizeof(char));

	if (!name)
	{
		free(name);
		return (NULL);
	}

	name[0] = '.';

	while (*pointer)
	{
		name[i] = *pointer;
		i++;
		pointer++;
	}
	return (name);
}

/**
 * count_name - Count the characters of the program
 *
 * @name_of_program: Name of program executable
 *
 * Return: number of characters of the name of program
 */

int count_name(char *name_of_program)
{
	int count = 0;

	while (name_of_program[count])
		count++;
	return (count);
}

/**
 * argstostr - Concatenates all the arguments of your program.
 *
 * @ac: arg count
 *
 * @av: arg vector
 *
 * Return: Pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size = 0, count = 0, size_of_name;
	char *name_of_program, *final_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	name_of_program = clean_name(av);
	size_of_name = count_name(name_of_program);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		size += j + 1;
	}
	size += (size_of_name + 1);
	final_string = malloc(size + 1);
	if (!final_string)
	{
		free(final_string);
		return (NULL);
	}
	for (k = 0; name_of_program[k]; k++)
		final_string[k] = name_of_program[k];
	final_string[k] = '\n';
	k++;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] && count < size - k; j++)
		{
			final_string[k + count] = av[i][j];
			count++;
		}
		if (!av[i][j])
		{
			final_string[count + k] = '\n';
			count++;
		}
	}
	free(name_of_program);
	final_string[count + k] = '\0';
	return (final_string);
}
