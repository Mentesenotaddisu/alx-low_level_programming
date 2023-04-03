#include "main.h"
/**
 *_memcpy - entry 
 *@dest: change
 *@src: change
 *@n: byte
 *return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0 ; y <= n; y++)
	{
	memcpy( dest, src, sizeof(src[y]));
	}
	return (dest);
}
