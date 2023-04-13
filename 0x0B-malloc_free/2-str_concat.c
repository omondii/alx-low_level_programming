#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concancates two strings
 *@s1: first string
 *@s2: Second string
 *Return: new
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int n = strlen(s1);
	int m = strlen(s2);
	char *new = malloc(sizeof(char *) * (n + m + 1));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		new[j + i] = s2[j];
	}
	new[j + i] = '\0';

	return (new);
}
