#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to check
 * @index: index of the bit we want to get
 * Return: Value of bit at index, or -1 if error shows
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int place;

	if (index > 64)
		return (-1);

	place = n >> index;

	return (place & 1);
}
