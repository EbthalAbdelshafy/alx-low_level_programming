#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of _
 * Return:print number of _
 *
 */

void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

