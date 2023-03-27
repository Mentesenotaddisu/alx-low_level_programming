#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - entry
 *@str: int
 *Return :Always 0
 */
int main(void)
{
	char str1[12] = "Hello";
	int  len;
	len = strlen(str1);
	_putchar("strlen(str1) :  %d\n", len );

}
