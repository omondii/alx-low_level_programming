#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - returns a pointer to a newly created location
 *@str: string
 *Return: nothing
 */
char *_strdup(char *str)
{
	int i;
	int len = strlen(str) + 1;
	char *new = malloc(sizeof(char) * len);

	if (str == NULL || new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
