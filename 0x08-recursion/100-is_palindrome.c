#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: string
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*(s + strlen))
	{
		strlen++;
		strlen += _strlen_recursion(s + strlen);
	}
	return (strlen);
}

/**
 * dtct_palindrome - detects if a string is a palindrome
 * @str: input string
 * @strlen: length of string
 * @arrIndex: string array index
 * Return: 1, if string is palindrome, o if otherwise
 */

int dtct_palindrome(char *str, int strlen, int arrIndex)
{
	if (str[arrIndex] == str[strlen / 2])
		return (1);

	if (str[arrIndex] == str[strlen - arrIndex - 1])
		return (dtct_palindrome(str, strlen, arrIndex + 1));
	return (0);
}

/**
 * is_palindrome - returns the dtct_palindrome function
 * @s: input string
 * Return: 1 if palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	int arrIndex = 0;
	int strlen = _strlen_recursion(s);

	if (!*s)
		return (1);
	return (dtct_palindrome(s, strlen, arrIndex));
}
