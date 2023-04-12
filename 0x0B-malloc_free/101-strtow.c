#include"main.h"
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *strtow - splits a string into words
 *@str: string to be split
 *Return: alpha
 */
char **strtow(char *str)
{
	char **alpha;
	int num_alpha, i, j, k, len;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_alpha = count_alpha(str);
	if (num_alpha == 0)
	{
		return (NULL);
	}

	alpha = (char **) malloc((num_alpha + 1) * sizeof(char *));
	if (alpha == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < num_alpha; i++, j += len)
	{
		while (isspace(str[j]))
		{
			j++;
		}
		len = next_word_length(&str[j]);
		alpha[i] = (char *) malloc((len + 1) * sizeof(char));
		if (alpha[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(alpha[k]);
			}
			free(alpha);
			return (NULL);
		}
		strncpy(alpha[i], &str[j], len);
		alpha[i][len] = '\0';
	}
	alpha[num_alpha] = (NULL);

	return alpha;
}
