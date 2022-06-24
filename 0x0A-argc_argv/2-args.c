#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives,including the first one
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
