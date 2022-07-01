#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 * Return: no return.
 */

void _is_zero(char *argv[])
{
	int i, isn1 = 1, isn2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _init_array - set memory to zero in new array
 * @ar: char aray
 * @arLen: length of the char array
 * Return: pointer of char array
 */

char *_init_array(char *ar, int arLen)
{
	int i = 0;

	for (i = 0; i < arLen; i++)
		ar[i] = '0';
	ar[arLen] = '\0';
	return (ar);
}

/**
 * _checknum - determines the length of the number
 * and checks if number is in base 10
 * @argv: arguments vector
 * @n: row of array
 * Return: length of number
 */

int _checknum(char **argv, int n)
{
	int len;

	for (len = 0; argv[n][len]; len++)
		if (!isdigit(argv[n][len]))
		{
			printf("Error\n");
			exit(98);
		}

	return (len);
}

/**
 * main - entry point, program that multiplies two positive numbers
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int len1, len2, lenout, add, addlen, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	len1 = _checknum(argv, 1), len2 = _checknum(argv, 2);
	_is_zero(argv), lenout = len1 + len2, nout = malloc(lenout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _init_array(nout, lenout);
		k = lenout - 1, i = len1 - 1, j = len2 - 1, ca = addlen = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addlen > 0)
			{
				add = (nout[k] - '0') + addlen;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = len1 - 1, j--, addlen = 0, ca++, k = lenout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lenout--;
			free(nout), nout = malloc(lenout + 1), nout = _init_array(nout, lenout);
			k = lenout - 1, i = len1 - 1, j = len2 - 1, ca = addlen = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addlen;
			addlen = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
