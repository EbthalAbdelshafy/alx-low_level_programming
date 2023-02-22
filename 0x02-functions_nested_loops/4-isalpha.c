#include "main.h"

/**
 * _isalpha - to check for alphabet character
 * @c: character to check
 * Return: nothing , return void
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

