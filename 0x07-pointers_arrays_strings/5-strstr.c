#include "main.h"

/**
 * _strstr - finds the first occurence of the substring
 * needle in the string haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of located
 * substring or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int arrIndex;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		arrIndex = 0;

		if (haystack[arrIndex] == needle[arrIndex])
		{
			do {
				if (needle[arrIndex + 1] == '\0')
					return (haystack);
				arrIndex++;
			} while (haystack[arrIndex] == needle[arrIndex]);
		}
		haystack++;
	}
	return ('\0');
}
