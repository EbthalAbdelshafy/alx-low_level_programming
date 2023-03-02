#include "main.h"

/**
 * _strncpy - copies string
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the max num of bytes to copied from src
 * Return: pointer to the resulting string dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_lenght = 0;

	while (src[index++])
		src_lenght++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_lenght; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
