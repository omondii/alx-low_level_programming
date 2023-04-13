#inclde "main.h"
#include<stdlib.h>
#include<string.h>
/**
 *array_range - creates an array of intergers
 *@min: the 1st number
 *@max: the last number
 *Return: new
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int i;
	int *new;

	if (min > max)
	{
		return (NULL);
	}
	new = malloc(sizeof(int) * size);


	for (i = 0; i < size; i++)
	{
		new[i] = min + i;
	}

	return (new);
}
