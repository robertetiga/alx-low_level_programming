#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: count of arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Return: EXIT_SUCCESS
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	exit(EXIT_SUCCESS);
}
