#include "main.h"

/**
 * print_diagonal - entry
 *@n: daigonal
 *Return: Alwasy 0
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n')'
	}
	else
	{
	for (x = 0; x <= n; x++)
	{
	for (y = 0; y <= x; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}

