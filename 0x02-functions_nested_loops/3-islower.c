#include "main.h"
/**
* _islower - checks if the given character is classified
* as a lowercase character
*
* @c: character to classify
*
* Return: 1 if true, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
