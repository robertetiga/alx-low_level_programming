#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @strn: string to be encoded
 * Return: the pointer to dest
 */

char *rot13(char *strn)
{
	int arrIndex = 0, i;
	char alphbt[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(strn + arrIndex) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(strn + arrIndex) == alphbt[i])
			{
				*(strn + arrIndex) = rot13[i];
				break;
			}
		}
		arrIndex++;
	}
	return (strn);
}
