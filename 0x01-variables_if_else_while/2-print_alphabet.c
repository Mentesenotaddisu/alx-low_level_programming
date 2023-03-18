#include <stdio.h>
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

	int lo_x = tolower(x);

	putchar(lo_x);

	}
	return (0);
}
