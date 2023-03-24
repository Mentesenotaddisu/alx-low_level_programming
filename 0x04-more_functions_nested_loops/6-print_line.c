#include "main.h"

/**
 * print_line - entry
 *@n: number
 *Return: Always 0
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; n++)
		{
			_putchar(95);
		}
	}
	return (0);
}
