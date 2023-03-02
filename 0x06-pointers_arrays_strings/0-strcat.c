#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the dest string
 * @src: the src string
 * Return: pointer to the resulting string dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int dest_lenght = 0, index;

	while (dest[dest_lenght])
	{
		dest_lenght++;
	}
	for (index = 0; src[index] != 0; index++)
	{
		dest[dest_lenght] = src[index];
		dest_lenght++;
	}
	dest[dest_lenght] = '\0';
	return (dest);
}
