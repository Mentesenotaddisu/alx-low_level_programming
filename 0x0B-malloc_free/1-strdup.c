#include "main.h"
#include <stdlib.h>
/**
 *_strdup - entry
 *@str: cha
 *Return: NUll
 */
char *_strdup(char *str)
{
	char *x;
	int i, y = 0;

	if (str == NULL)
	return (NULL);

	i = 0;

	while (str[i] != '\0')

	i++;
	x = malloc(sizeof(char) * (i + 1));
	if (x == NULL)
	return (NULL);
	for (y = 0; str[y]; y++)
	x[y] = str[y];
	return (x);
}