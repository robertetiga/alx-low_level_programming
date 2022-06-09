#include "main.h"
/**
 * _isupper - Checks if the given character is an uppercase character
 *
 * @c: character to classify
 *
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
