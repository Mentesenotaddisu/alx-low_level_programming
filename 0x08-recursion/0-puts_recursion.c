#include "main.h"
/**
 *_puts_recursion - entry
 *@s: string
 * main - entry
 *Return: 0
 */
void _puts_recursion(char *s)
{
	_puthar(_puts_recursion(s[]));
			return;

}
int main(void)
{
	_puts_recursion("hello");
	return (0);
}
