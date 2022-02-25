#include "main.h"

/**
 * main - Prints all arguments it receives.
 *
 * @argc: number of parameters
 *
 * @argv: parameters recevied.
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
