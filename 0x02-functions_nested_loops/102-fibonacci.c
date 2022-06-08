#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 on success
 */
int main(void)
{
	int c;
	long int num1, num2, fib;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (c = 0; c < 48; c++)
	{
		fib = num1 + num2;
		printf(", %ld", fib);
		num1 = num2;
		num2 = fib;
	}
	printf("\n");
	return (0);
}
