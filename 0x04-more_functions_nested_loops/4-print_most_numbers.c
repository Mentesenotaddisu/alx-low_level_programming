#include "main.h"

/**
 * print_most_numbers - entry
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	if (x == 2)
		{
		break;
		}
	if (x == 4)
		{
		break;
		}
	_putchar(x + '0');
	}
	_putchar('\n');
}
