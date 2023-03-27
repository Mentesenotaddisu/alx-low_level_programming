#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - entry
 * @n: int
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	n = 100;
	int *p;
	
	p = &n;
	*p = 98;

	_putchar("%d\n',*p);
	return (0);
}

