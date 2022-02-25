#include "main.h"

/**
 * main - Prints the quantity of arguments.
 *
 * @argc: number of parameters
 *
 * @argv: parameters recevied.
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
