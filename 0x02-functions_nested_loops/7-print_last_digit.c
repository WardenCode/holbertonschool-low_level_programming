#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: Number recevied
 *
 * Return: return the last digit of a number
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	return (last_digit);
}
