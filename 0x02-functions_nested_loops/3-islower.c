#include "main.h"

/**
 * _islower - Checks if
 *
 * Description: Prints the alphabet in lowercase by a new line 10  * times.
 *
 * Return: void
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
