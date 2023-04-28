#include "main.h"

/**
 * _supper - Checks for lowercase charcter
 * @c: The character to be checked
 * Return: 1 for uppercase character or 0 for anything else
 */

int _supper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
