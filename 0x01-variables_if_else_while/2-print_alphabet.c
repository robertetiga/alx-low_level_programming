#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alphbt[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphbt[i]);
	}
	putchar('\n');
	return (0);
}
