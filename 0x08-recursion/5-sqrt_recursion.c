#include "main.h"
#include <stdio.h>

/**
 * number - helps find the natural squareroot number
 * @n: natural number starting at 1
 * @root: squareroot number to be found
 *
 * Return: squareroot of answer
 * if root is not natural squareroot returns -1
 * if root less than 0 returns -1
 */
int number(int n, int root)
{
	if (n * n == root)
		return (n);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}

/**
 * _sqrt_recursion - that returns the natural square root of a number
 * @n: number of which natural square root should be found
 *
 * Return: natural squareroot n
 * if n does not have a natural squareroot, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
