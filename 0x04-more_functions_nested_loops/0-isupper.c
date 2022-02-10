#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 *
 * @c: ASCII number
 *
 * Return: 1 if c is upper, otherwise return 0.
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
