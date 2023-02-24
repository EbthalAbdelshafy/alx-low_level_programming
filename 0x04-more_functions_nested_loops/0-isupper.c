#include "main.h"

/**
 * _isupper - check il a character is upper
 * @c: number to check
 * Return: 1 for upper char or 0 for other
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
