#include "main.h"

/**
 * _isalpha - Checks if the param is letter
 *
 * @c: ASCII received
 *
 * Description: Checks if the param is a letter.
 *
 * Return: If the param is a letter return 1 if not return 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z') || c == ',')
		return (1);
	else
		return (0);
}
