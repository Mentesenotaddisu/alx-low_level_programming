#include "main.h"
/**
 *_memcpy - entry
 *@dest: change
 *@src: change
 *@n: byte
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0 ; y < n; y++)
	{
	dest[y] = src[y];
	}
	return (dest);
}
