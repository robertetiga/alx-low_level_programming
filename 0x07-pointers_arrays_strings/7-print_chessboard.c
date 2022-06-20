#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @: the chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	unsigned int arr1, arr2;

	for (arr1 = 0; a[arr1][7]; arr1++)
	{
		for (arr2 = 0; arr2 < 8; arr2++)
			_putchar(a[arr1][arr2]);
		_putchar('\n');
	}
}
