#include "variadic_functions.h"
/**
*sum_them_all - returns sum
*@n: count
*Return: int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
	return;
	}
	for (i = 0; i < n; i++)
	{
	unsigned int x = va_arg(args, unsigned int);
	printf("%d\n", x);
	}
}
