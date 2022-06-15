#include "main.h"

/**
 * _strcat - Appends a copy of the null-terminated
 * byte string pointed to by src to the end of the null-terminated
 * byte string pointed to by dest. The character
 * src[0] replaces the null terminator at the
 * end of dest. The resulting byte
 * string is null-terminated.
 * @dest: pointer to the null-terminated byte string to append to
 * @src: pointer to the null-terminated byte string to copy from
 * Return: a copy of dest
 */

char *_strcat(char *dest, char *src)
{
	int arrIndexStr1 = 0, arrIndexStr2 = 0;

	while (*(dest + arrIndexStr1) != '\0')
	{
		arrIndexStr1++;
	}

	while (arrIndexStr2 >= 0)
	{
		*(dest + arrIndexStr1) = *(src + arrIndexStr2);
		if (*(src + arrIndexStr2) == '\0')
			break;
		arrIndexStr1++;
		arrIndexStr2++;
	}
	return (dest);
}
