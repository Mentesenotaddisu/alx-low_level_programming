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

	for (x = 'Z'; x <= 'A'; x++)
	{
	while (x >= 'A')
	putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
