#include "main.h"
#include <stdio.h>
/**
 * main - entry
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;

	if (argc == 3)
	{
	x = atoi(argv[1]);
	y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
