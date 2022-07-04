#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: EXIT_SUCCESS-1
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (1);
}
