#include <stdio.h>

/**
 * main - prints the single digit number
 * Return: Always 0 .
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
