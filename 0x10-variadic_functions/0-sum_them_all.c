#include "variadic_functions.h"
/**
 *sum_them_all - returns sum
 *@n: count
 *Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int y = 0;
	int i;

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
	unsigned int x = va_arg(args, unsigned int);

	y += x;
	}
	return (y);
}

