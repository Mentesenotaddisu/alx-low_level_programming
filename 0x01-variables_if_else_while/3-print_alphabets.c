#include <stdio.h>
#include <ctype.h>
/**
 * main - entry
 * Return: Always 0
 *
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(tolower(x));
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);

}
