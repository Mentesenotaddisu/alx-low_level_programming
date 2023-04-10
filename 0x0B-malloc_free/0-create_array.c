#include "main.h"
#include <stdlinb.>
/**
 *create_array - entry
 *@size: size
 *@c: cha
 *return: NUll 
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i ;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
