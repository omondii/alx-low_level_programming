#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *string_nconcat - concatenates 2 strings, string 2 upto nth value
 *@new - new string
 *@s1: string 1
 *@s2:string 2
 *@n: number of characters from string 2 to concatenate
 *Return: new
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	new = malloc(strlen(s1) + n + 1);

	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
