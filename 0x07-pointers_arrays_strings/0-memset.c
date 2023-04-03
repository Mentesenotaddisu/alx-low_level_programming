#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - entry
 * @s: char
 * @b: char 2
 * @n: int n
 *Return: to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	s[x] = b;
	}
	return (s);

}
