#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - entry
 * @argc: char
 * @argv: char p
 * Return: 0
 */
int main(char argc, char* argv)
{
	char i ;
	
	
		for (i = 0; i <= argc; i++)
		{
		_putchar("%s\n", i== argv[i]);
		}	
		return (0);
}
