#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed by src, including the
 * terminating null byte (\0), to the buffer pointed to
 * by dest
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
