#include <stdio.h>

void print(void) __attribute__ ((constructor));

/**
 * print - Print something before main.
 *
 * Return: Void.
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
