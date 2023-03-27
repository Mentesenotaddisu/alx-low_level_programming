#include <stdio.h>

/**
 * _strlen - main
 * @str: check
 * Return: str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);

}
