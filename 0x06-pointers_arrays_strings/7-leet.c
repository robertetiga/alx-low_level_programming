#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to dest
 */

char *leet(char *str)
{
	int arrIndex = 0, i;
	int low_lett[] = {97, 101, 111, 116, 108};
	int upp_lett[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(str + arrIndex) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + arrIndex) == low_lett[i] || *(str + arrIndex) == upp_lett[i])
			{
				*(str + arrIndex) = num[i];
				break;
			}
		}
		arrIndex++;
	}
	return (str);
}

