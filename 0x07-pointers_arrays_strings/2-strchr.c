#include "main.h"
/**
 *_strchr - entry
 *@s: string
 *@c: char in s
 *Return: to c or null
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		s[x] = c;
	}
	if (x == '\0')
	{
		return (NULL);
	}
	return (c);
}
