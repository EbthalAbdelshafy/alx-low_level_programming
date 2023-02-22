#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@i: character to check
 * Return: Absolute value of number
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs;

		abs = (i * -1);
		return (abs);
	}
	return (i);
}
