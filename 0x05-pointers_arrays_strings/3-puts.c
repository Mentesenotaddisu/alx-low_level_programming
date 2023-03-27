#include <stdio.h>
#include "main.h"

/**
 * mian - entry
 * Return: always 0
 */
void _puts(char *str)
{
	for (; *str != '\n'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
