#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf('%d\n'"is positive");
	}
	if (n < 0)
	{
	printf('%d\n'"is negative");
	}
	else
	{
	printf('%d\n'"is zero")
	}
	/* your code goes there */
	return (1);
}
