#include "main.h"

/**
 * _isdigit - Checks for a digit.
 *
 * @c: ASCII number
 *
 * Return: 1 if c is a digit, otherwise return 0.
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
