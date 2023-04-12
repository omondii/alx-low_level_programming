#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *create_array - creates an array and initializes it with a specific char
 *@size: of memory to be allocated
 *@c: value to iniatialize array with
 *Return: Nothing
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
