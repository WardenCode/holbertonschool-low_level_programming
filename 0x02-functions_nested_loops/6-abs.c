#include "main.h"

/**
 * _abs - return the absolute value of an number
 *
 * @n: Number recevied
 *
 * Return: return the absolute value of n
 */

int _abs(int n)
{
	int absolute = n;

	if (n == 0)
	{
		return (0);
	}

	if (n < 0)
	{
		absolute = n * -1;
	}

	return (absolute);
}
