#include <stdio.h>
#include "main.h"

/**
 * _isupper- entry
 * Return: Always 0
 * @c: check
 */

int _isupper(int c);
{
	if (c >= 65 && c <= 97)
	{
	return (1);
	}
	return (0);
}
