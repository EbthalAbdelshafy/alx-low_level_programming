#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: nothing , return void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
