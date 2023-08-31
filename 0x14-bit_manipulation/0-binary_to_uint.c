#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char str
 * Return: converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int all, power;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (power = 1, all = 0, i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
			all += power;
	}

	return (all);
}
