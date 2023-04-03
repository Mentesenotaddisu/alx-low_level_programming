#include "main.h"
/**
 *_strchr - entry
 *@s: string
 *@c: char in s
 *Return: to c or null
 */
char *_strchr(char *s, char c)
{
	char x;

	for (x = 0; x < c; x++)
	{
		s[x] = c[x];
	}
	if (x == '\0')
	{
		return (NULL);
	}
	return (c);
}
