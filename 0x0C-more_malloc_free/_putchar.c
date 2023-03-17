#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the char c to stdout
 * @c: the char to print
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
