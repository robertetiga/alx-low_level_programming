#include "main.h"
/**
* _isalpha - checks if the given character is an alphabetic character
*
* @c: character to classify
*
* Return: 1 if charcter is an alphabet
* 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
