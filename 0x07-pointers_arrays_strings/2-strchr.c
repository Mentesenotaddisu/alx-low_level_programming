#include "main.h"
#include <stdio.h>
/**
 *_strchr - entry
 *@s: string
 *@c: char in s
 *Return: to c or null
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
	if (s[x] == c)
		return (&s[i]);
	}
	return (0);
}
