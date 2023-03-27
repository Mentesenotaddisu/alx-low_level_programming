#include <stdio.h>
#include "main.h"

/**
 * _strlen - entry
 *@s: int
 *Return: strlen
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
