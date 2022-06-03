#include <stdio.h>
/**
 * main - print the alphabets in lowercase and uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alphbt[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphbt[i]);
	}
	putchar('\n');
	return (0);
}
