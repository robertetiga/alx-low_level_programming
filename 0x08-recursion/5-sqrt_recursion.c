#include "main.h"

int calc_sqrt(int, int);
/**
 * calc_sqrt - calculate the natural square root
 * @num: input number
 * @root: iterator or tester
 * Return: if no errors occur, square root of num is returned
 */

int calc_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2 )
		return (-1);

	return (calc_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: input integer
 * Return: if no errors occur, the natural square root of n
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (calc_sqrt(n, root));
}
