#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string to compare
 * @s2: pointer to socend string to compare
 * Return: negative if s1 < s2 ,0 if s1 == s2
 * positive if s1 > s2
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
