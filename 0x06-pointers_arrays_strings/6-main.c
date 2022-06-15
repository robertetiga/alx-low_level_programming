#include "main.h"
#include <stdio.>

/**
 * main - check the code
 * Return: 0 on success
 */

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", ptr);
	return (0);
}
