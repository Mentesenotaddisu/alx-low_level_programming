#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * Return: Always 0
 */

int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (numer % x == 0)
	{
		maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
