#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: number to check
 * Return: 1 for digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{return (1);
	}
	return (0);
}
