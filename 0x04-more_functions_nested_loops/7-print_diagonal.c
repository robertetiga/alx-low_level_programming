#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int ch, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ch = 1; ch <= n; ch++)
		{
			for (space = 1; space < ch; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
