#include "main.h"
/**
 * _isdigit - Checks if the given character is a numeric character (0123456789)
 *
 * @c: character to classify
 *
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
