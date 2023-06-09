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
	unsigned long int special;
	int i, count = 0;

	special = n ^ m;

	while (special)
	{
		count++;
		special &= (special - 1);
	}

	return (special);
}
