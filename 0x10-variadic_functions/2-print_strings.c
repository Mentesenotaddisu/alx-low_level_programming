#include "variadic_functions.h"
/**
*print_strings - returns sum
*@n: count
*@separator: comma
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;

va_start(args, n);

if (separator == NULL)
{
return;
}
for (i = 0; i < n; i++)
{
	str = va_arg(args, char *);
if (str == NULL)
{
	printf("nil");
}
else
printf("%s", str);
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
