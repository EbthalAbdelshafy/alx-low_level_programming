#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended upon
 * @src: string to be appended to dest
 * @n: number of bytesfrom src to dest
 * Return: a pointer to the resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_lenght = 0;

	while (dest[index++])
		dest_lenght++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_lenght++] = src[index];
	return (dest);
}
