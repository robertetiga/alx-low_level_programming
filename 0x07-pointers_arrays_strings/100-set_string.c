#include "main.h"

/**
 * set_string - sets the value of a pointer
 * to a char
 * @s: source memory address
 * @to: target memory addess
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
