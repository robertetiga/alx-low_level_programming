#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change for an amount of money
 * @argc: a count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Return: EXIT_FAILURE if number of arguments passed is not exactly 1
 */

int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	exit(EXIT_SUCCESS);
}
