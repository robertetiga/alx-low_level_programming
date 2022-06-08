#include "main.h"
/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line
*
* Return: 0 on success
*/
void print_alphabet(void)
{
	int alphbt;

	for (alphbt = 97; alphbt < 123; alphbt++)
	{
		_putchar(alphbt);
	}
	_putchar('\n');
}
