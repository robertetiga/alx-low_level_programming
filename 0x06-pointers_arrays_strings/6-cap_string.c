#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: a pointer to capitalized string
 */

char *cap_string(char *str)
{
	int arrIndex = 0;

	while (str[arrIndex])
	{
		while (!(str[arrIndex] >= 97 && str[arrIndex] <= 122))
		{
			arrIndex++;
		}

		if (str[arrIndex - 1] == ' ' ||
				str[arrIndex - 1] == '\t' ||
				str[arrIndex - 1] == '\n' ||
				str[arrIndex - 1] == ',' ||
				str[arrIndex - 1] == ';' ||
				str[arrIndex - 1] == '.' ||
				str[arrIndex - 1] == '!' ||
				str[arrIndex - 1] == '?' ||
				str[arrIndex - 1] == '"' ||
				str[arrIndex - 1] == '(' ||
				str[arrIndex - 1] == ')' ||
				str[arrIndex - 1] == '{' ||
				str[arrIndex - 1] == '}' ||
				arrIndex == 0)
		{
			str[arrIndex] -= 32;
		}
		arrIndex++;
	}
	return (str);
}
