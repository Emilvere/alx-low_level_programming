#include "main.h"

/**
 * swap_int - take in two variable integers and swaps them
 * @author emilvere
 * @a: swaps and stores address of b
 * @b: swaps and stores the address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
