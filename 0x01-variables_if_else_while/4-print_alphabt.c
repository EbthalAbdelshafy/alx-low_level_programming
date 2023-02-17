#include <stdio.h>

/**
 * main - prints the alphabet whitout e and q
 * Return: Always 0 .
 */

int main(void)
{
	char a, e, q;

	e = 'e';
	q = 'q';

	for (a = 'a' ; a < 'z' ; a++)
	{
	if (a != e && a != q)
	putchar(a);
	}
putchar('\n');
return (0);
}
