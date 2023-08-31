#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int count = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, count = 0; (tmp >>= 1) > 0; count++)
		;

	for (; count >= 0; count--)
	{
		if ((n >> count) & 1)
			printf("1");
		else
			printf("0");
	}
}
