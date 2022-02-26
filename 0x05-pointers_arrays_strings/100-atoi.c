#include "main.h"

/**
 * _atoi - Transform a string to int.
 *
 * @s: String
 *
 * Return: 0 if failure or a number if success
 */

int _atoi(char *s)
{
	int i, size = 0, count_sign = 0, flag_number = 0;
	unsigned int result = 0;

	while (s[size])
		size++;

	for (i = 0; i < size; i++)
	{
		if (flag_number == 1 && !(s[i] >= '0' && s[i] <= '9'))
			break;

		if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-')
		{
			if (s[i] == '0' && flag_number == 0)
				return (0);

			if (s[i] == '-')
			{
				count_sign++;
				continue;
			}

			if (s[i] >= '0' && s[i] <= '9')
			{
				flag_number = 1;
				result = (result * 10) + (s[i] - '0');
			}
		}
	}
	if (count_sign % 2 != 0)
	{
		result *= -1;
	}

	return (result);
}
