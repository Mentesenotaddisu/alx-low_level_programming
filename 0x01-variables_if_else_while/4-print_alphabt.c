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
	if (x != 'E' && x != 'Q')
	putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
