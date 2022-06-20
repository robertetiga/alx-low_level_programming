#include "main.h"

/**
 * _strpbrk - searches strng for any of a set of bytes
 * @s: string to perform operation on
 * @accept: the set of bytes to be searched for
 * Return: if a set is matched - a pointer to the matched
 * byte. If no set is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int arrIndex;

	while (*s)
	{
		for (arrIndex = 0; accept[arrIndex]; arrIndex++)
		{
			if (*s == accept[arrIndex])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
