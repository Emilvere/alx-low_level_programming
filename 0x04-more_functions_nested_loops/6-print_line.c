#include "main.h"

/**
 * print_line - Straight -line
 * @n: number of times
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	for (i = '0'; i < n; i++)
	{
		_putchar(' ');
	}
	_putchar('\n');
}
