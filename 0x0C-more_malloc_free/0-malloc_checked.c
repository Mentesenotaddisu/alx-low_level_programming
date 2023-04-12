#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - entry
 *@b: unsigned int
 *Return: (x)
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
