#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it, followed by a new line
 * @argc: a count of arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
