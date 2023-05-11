#include "main.h"
#include <stdio.h>

/**
 * Factorial - a function that returns the factorial of a given number
 * @n: number whose factorial is to be returned
 *
 * Description: - A function that returns a factorial of a  given number
 * the function returns -1 if n is lower than 0
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
