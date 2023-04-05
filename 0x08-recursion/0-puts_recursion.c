#include "main.h"
/**
 *_puts_recursion - entry
 *@s: string
 * main - entry
 *Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	_putchar(*s);
	s++;
	_puts_recursion(s);
			return;
}
