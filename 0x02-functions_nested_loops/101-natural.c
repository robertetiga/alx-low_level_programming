#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 on success
 */
int main(void)
{
	int mult, sum;

	for (mult = 1; mult < 1024; mult++)
	{
		if ((mult % 3) == 0 || (mult % 5) == 0)
			sum += mult;
	}
	printf("%d\n", sum);
	return (0);
}
