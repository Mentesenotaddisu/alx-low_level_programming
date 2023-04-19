#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - fuction to be pointed at
 *@name: cahr
 *@f: ..
 **: char
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
