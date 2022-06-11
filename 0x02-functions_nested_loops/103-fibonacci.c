#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * of the fibonacci sequence whose values do not exceed
 * 4,000,000
 *
 * Return: 0 on success
 */

int main(void)
{
	long int num1, num2, fib, fibSum;

	num1 = 1;
	num2 = 2;
	fib = fibSum = 0;
	while (fib <= 4000000)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		if ((num1 % 2) == 0)
		{
			fibSum += num1;
		}
	}
	printf("%ld\n", fibSum);
	return (0);
}
