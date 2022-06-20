#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to perform operation on
 * @accept: the prefix to be measured
 * Return: the number of bytes in s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int arrIndex;

	while (*s)
	{
		for (arrIndex = 0; accept[arrIndex]; arrIndex++)
		{
			if (*s == accept[arrIndex])
			{
				bytes++;
				break;
			}
			else if (accept[arrIndex + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
