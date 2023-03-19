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

	 int y;


	for (x = '0'; x <= '9'; x++)
	for (y = 'a'; y <= 'f'; y++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
