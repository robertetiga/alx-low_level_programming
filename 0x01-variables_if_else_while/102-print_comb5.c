#include <stdio.h>
/**
 * main -  prints all possible combinations of 0 to 99
 *
 * Return: always 0 (success)
 */
int main(void)
{
int a, b, c, d, opp1, opp2;

a = b = c = d = 48;
while (d < 58)
{
	c = 48;
	while (c < 58)
	{
		b = 48;
		while (b < 58)
		{
			a = 48;
			while (a < 58)
			{
				opp1 = (d * 10) + c;
				opp2 = (b * 10) + a;
				if (opp1 < opp2)
				{
					putchar(d);
					putchar(c);
					putchar(' ');
					putchar(b);
					putchar(a);
					if (d == 57 && c == 56 && b == 57 && a == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
	d++;
}
putchar('\n');
return (0);
}
