#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *create_array - creates an array and initializes it with a specific char
 *@size: of memory to be allocated
 *@char: value to iniatialize array with
 *Return: Nothing
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (0);
	}
	char *s = (char) malloc(sizeof(char) * size)
		if (*s == NULL)
		{
			return(NULL);
		}
	unsigned int i;
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (c);
}
