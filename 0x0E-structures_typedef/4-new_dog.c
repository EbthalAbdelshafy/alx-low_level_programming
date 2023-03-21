#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int name_len = 0, own_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		own_len = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));
		if (max_dog == NULL)
			return (NULL);
		max_dog->name = malloc(sizeof(char) * name_len);
		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}
		max_dog->owner = malloc(sizeof(char) * own_len);
		if (max_dog->owner == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}
		max_dog->name = _strcpy(max_dog->name, name);
		max_dog->owner = _strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}
	return (max_dog);
}

/**
 * _strlen - return the lenght of the string
 * @s: string to count
 * Return: string lenght
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
/**
 * _strcpy - return the copy of string
 * @dest: the dest string
 * @src: the source string
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}


