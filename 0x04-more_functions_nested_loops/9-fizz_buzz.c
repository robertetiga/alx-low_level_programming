#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100, followed
 * by a new line. But for multiples of three print
 * Fizz instead of the number and for
 * the multiples of five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuzz
 * Return: 0 on success
 */

int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", buzz);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fizzbuzz);
		else if (i % 3 == 0)
			printf("%s ", fizz);
		else if (i % 5 == 0)
			printf("%s ", buzz);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
