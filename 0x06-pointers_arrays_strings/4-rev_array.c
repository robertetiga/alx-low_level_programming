#include "main.h"

/**
 * reverse_array - reverses the elements of an array of integers
 * @a: arra of integers to be reversed
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, arrIndex;

	for (arrIndex = n - 1; arrIndex >= n / 2; arrIndex--)
	{
		temp = a[n - 1 - arrIndex];
		a[n - 1 - arrIndex] = a[arrIndex];
		a[arrIndex] = temp;
	}
}
