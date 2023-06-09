#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int place;
	unsigned long int special = n ^ m;

	for (i = 64; i >= 0; i--)
	{
		place = special >> i;
		if (place & 1)
			count++;
	}

	return (count);
}


