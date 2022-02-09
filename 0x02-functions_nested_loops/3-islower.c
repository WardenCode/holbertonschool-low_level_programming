#include "main.h"

/**
 * _islower - Checks if the param is lowercase
 *
 * @c: ASCII received
 *
 * Description: Checks if the param is lowercase.
 *
 * Return: 1 if is lowercase or 0 is not
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
