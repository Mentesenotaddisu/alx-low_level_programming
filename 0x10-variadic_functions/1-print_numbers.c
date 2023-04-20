#include "variadic_functions.h"
/**
*print_numbers - returns sum
*@n: count
*@separator: comma
*Return: void
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

	printf("%d", x);

	if (i != (n - 1) &&  separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
}
