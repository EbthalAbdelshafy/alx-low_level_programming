#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 .
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9' ; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
