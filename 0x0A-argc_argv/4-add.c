#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the result of addition of positive numbers
 * @argc: a count of arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Return: EXIT_FAILURE if one of the numbers contains symbols
 *	   EXIT_SUCCESS if operation was successful
 */

int main(int argc, char **argv)
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	exit(EXIT_SUCCESS);
}
