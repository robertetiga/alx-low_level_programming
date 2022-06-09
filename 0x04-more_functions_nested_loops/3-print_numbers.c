#include "main.h"
/**
 * print_numbers - prints the numbers,
 * from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
