#include "main.h"

/**
 * _puts - entry
 * @str: string
 * Return: always 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
