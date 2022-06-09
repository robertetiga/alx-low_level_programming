#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed
 * by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples
 * of five print Buzz. For numbers which are multiples
 * of both three and five print FizzBuzz
 * Return: 0 0n success
 */

int main(void)
{
	int num;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzBuzz[] = "Fizz Buzz";

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
			printf("%s", buzz);
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("%s ", fizzBuzz);
		else if (num % 3 == 0)
			printf("%s ", fizz);
		else if (num % 5 == 0)
			printf("%s ", buzz);
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
