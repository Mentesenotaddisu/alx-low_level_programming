#include "main.h"
/**
 * main - entry
 * Return: Alwasy 0
 */

int main(void)
{
	int x;

	for (x = 1 ; x <= 100; x++)
	{
		if(x * 5)
		{
		_putchar("Buzz");
		}
		else if (x * 3)
		{
		_putchar("Fizz");
		}
	_putchar(x);
	_putchar(' ');
	}
}
