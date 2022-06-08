#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times, in lowercase
*
* Return: 0 on success
*/
void print_alphabet_x10(void)
{
	int line, alphbt;

	for (line = 0; line <= 9; line++)
	{
		for (alphbt = 97; alphbt <= 122; alphbt++)
		{
			_putchar(alphbt);
		}
	_putchar('\n');
	}
}
