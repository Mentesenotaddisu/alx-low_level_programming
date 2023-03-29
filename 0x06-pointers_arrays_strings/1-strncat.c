#include "main.h"

/**
 * _strncat - concatenate
 * @dest: char 1
 * @src: char 2 
 * @n: int
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	i = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = sre[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}




