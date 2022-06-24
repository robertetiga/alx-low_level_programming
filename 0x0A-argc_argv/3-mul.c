#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multiplying two numbers, followed by a new line
 * @argc: count of arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Return: EXIT_FAILURE if program receives less than two arguments
 *	   EXIT_SUCCESS if operation is successful
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	exit(EXIT_SUCCESS);
}
