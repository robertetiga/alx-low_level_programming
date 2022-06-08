#include "main.h"
/**
* print_sign - determines if the input is greater
* than zero, is zero, or less than zero
*
* @n: input is integer
*
* Return: 1 if greater than 0, 0 if 0,
* -1 if less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
