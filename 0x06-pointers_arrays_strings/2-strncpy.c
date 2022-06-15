#include "main.h"

/**
 * _strncpy - Copies at most count characters of
 * the character array pointed to by src (including
 * the terminating null character, but not any of
 * the characters that follow the null character)
 * to character array pointed to by dest.
 * @dest: pointer to the character array to copy to
 * @src: pointer to the character array to copy from
 * @n: the number of bytes to copy from src
 * Return: a copy of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
