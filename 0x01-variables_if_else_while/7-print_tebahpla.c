#include <stdio.h>
/**
 * main - print alphabet in reverse order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
