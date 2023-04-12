#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *argstostr - concatenates all the aguments of the program
 *@ac: counter for program arguments
 *@av: array of strings for arguments
 *Return: nee
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int ptr = 0;
	int i;
	char *result;
	int count;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		count = 0;
		while (av[i][count])
		{
			count++;
		}
		len += count + 1;
	}

	result = malloc (sizeof(char) * len);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		count = 0;
		while (av[i][count])
		{
			result[ptr] = av[i][count];
			ptr++;
			count++;
		}
		result[ptr] = '\n';
		ptr++;
	}
	result[ptr] = '\0';
	return (result);
}
