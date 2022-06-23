#include "main.h"

/**
 * dtct_prime - checks if input integer is a prime number
 * @n: input integer
 * @div: iterator
 * Return: 1 if integer, 0 otherwise
 */

int dtct_prime(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (dtct_prime(n, div + 1));
}

/**
 * is_prime_number - calls the dtct_prime function
 * @n: input integer
 * Return: 1 if n is a prime number
 */

int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
		return (0);
	return (dtct_prime(n, 2));
}
