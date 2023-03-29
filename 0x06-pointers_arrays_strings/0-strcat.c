#include "main.h"

/**
 * *_strcat - entry
 * @dest: char 1
 * @src: cahe 2
 * Return: to char 1
 */
char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	_putchar("strcat(*dest, *src): %s\n", *dest);
	return (0);
}
