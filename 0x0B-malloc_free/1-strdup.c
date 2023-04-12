#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly created location
 *@str: string
 *Return: nothing
 */
char *_strdup(char *str)
{
	char *new = malloc(char)*(len + 1);
	int len = _strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}


	if (new == NULL)
	{
		return (NULL);
	}
	_strcpy(new, str);
	return (new);
}
