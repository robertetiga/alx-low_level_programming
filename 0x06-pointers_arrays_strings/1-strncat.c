#include "main.h"

/**
 * _strncat - Appends at most count characters
 * from the character array pointed to by src, stopping
 * if the null character is found, to the end of the
 * null-terminated byte string pointed to by dest.
 * The character src[0] replaces the null terminator
 * at the end of dest. The terminating null character
 * is always appended in the end (so the maximum number
 * of bytes the function may write is count+1).
 * @dest: pointer to the null-terminated byte string to append to
 * @src: pointer to the character array to copy from
 * @n: amount of bytes used from src
 * Return: a copy of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int arrIndexStr1 = 0, arrIndexStr2 = 0;

	while (*(dest + arrIndexStr1) != '\0')
	{
		arrIndexStr1++;
	}

	while (arrIndexStr2 < n)
	{
		*(dest + arrIndexStr1) = *(src + arrIndexStr2);
		if (*(src + arrIndexStr2) == '\0')
			break;
		arrIndexStr1++;
		arrIndexStr2++;
	}
	return (dest);
}
