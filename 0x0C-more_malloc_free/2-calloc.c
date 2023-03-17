#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number vof numbers
 * @size: size of array
 *
 * Return: nothig
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, s = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = nmemb * size;
	p = malloc(s);
	if (p == NULL)
		return (NULL);
	while (i < s)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
