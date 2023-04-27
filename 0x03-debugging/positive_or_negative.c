#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 *
 * @i: the int to be checked
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
