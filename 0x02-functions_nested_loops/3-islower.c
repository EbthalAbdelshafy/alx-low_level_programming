#include "main.h"

/**
 * _islower - check for lowercase
 *@c: character to check
 * Return: nothing , return void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
