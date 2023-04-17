#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string.
 * @s: input string
 * Return: length(success)
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * *_strcpy - Copies the string to dest from src plus new line.
 * @dest: input pointer to be copied to
 * @src: input pointer to be copied from
 * Return: pointer to dest(success)
*/
char *_strcpy(char *dest, char *src)
{
	int dd = 0, sr;

	while (src[dd] != '\0')
		dd++;
	for (sr = 0; sr < dd; sr++)
		dest[sr] = src[sr];

	dest[sr] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: input name of new dog
 * @age: input age of new dog
 * @owner: input owner of the new dog
 * Return: pointer to new dog(success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bull_dog;
	int aa, bb;

	aa = _strlen(name);
	bb = _strlen(owner);

	bull_dog = malloc(sizeof(dog_t));

	if (bull_dog == NULL)
		return (NULL);

	bull_dog->name = malloc(sizeof(char) * (aa + 1));

	if (bull_dog->name == NULL)
	{
		free(bull_dog);
		return (NULL);
	}

	bull_dog->owner = malloc(sizeof(char) * (bb + 1));

	if (bull_dog->owner == NULL)
	{
		free(bull_dog);
		free(bull_dog->name);
		return (NULL);
	}
	_strcpy(bull_dog->name, name);
	_strcpy(bull_dog->owner, owner);
	bull_dog->age = age;

	return (bull_dog);
}
