#include <stdio.h>
#include <math.h>

/**
 * main -  prints the largest prime factor of the number
 * Return: Always 0
 */

int main(void)
{
	long x, maxfac;
	long n = 612852475143;
	double square = sqrt(n);

	for (x = 1; x < square; x++)
	{
		if (n % x == 0)
		{
			maxfac = n / x;
		}
	}
	printf("%ld\n", maxfac);
	return (0);
}

