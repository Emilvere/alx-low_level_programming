#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: pointer number
 * @index: index position to change
 * Return: 1 on success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int a;

	if (index > 64)
		return (-1);

	for (a = 1; index > 0; index--, a *= 2)
		;
	*n += a;

	return (1);
}
