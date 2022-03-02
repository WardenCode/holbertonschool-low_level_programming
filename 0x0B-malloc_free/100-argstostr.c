#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i, j, size = 0, count = 0;
	char *final_string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		size += j + 1;
	}

	final_string = malloc((size + 1) * sizeof(char));

	if (!final_string)
	{
		free(final_string);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			final_string[count] = av[i][j];
			count++;
		}

		if (!av[i][j])
		{
			final_string[count] = '\n';
			count++;
		}
	}

	final_string[count + 1] = '\0';
	return (final_string);
}
