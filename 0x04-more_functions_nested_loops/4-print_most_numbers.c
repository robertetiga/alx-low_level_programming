#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int ch = 48;

	while (ch < 58)
	{
		if (ch == 50 || ch == 52)
		{
			ch++;
			continue;
		}
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
