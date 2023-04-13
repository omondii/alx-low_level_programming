#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *malloc_checked - allocates memory and returns a pointer
 *@b: size of the memory to allocate
 *Return: a
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
