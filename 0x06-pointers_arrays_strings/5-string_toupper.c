#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: input string
 * Return: the pointer to dest
 */

char *string_toupper(char *str)
{
	int arrIndex = 0;

	while (*(str + arrIndex) != '\0')
	{
		if ((*(str + arrIndex) >= 97) && (*(str + arrIndex) <= 122))
			*(str + arrIndex) = *(str + arrIndex) - 32;
		arrIndex++;
	}
	return (str);
}

