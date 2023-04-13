#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *_calloc - allocates memory then initializes it to 0
 *@nmemb: element to allocate memory for
 *@size: size of memory to allocate
 *Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	memset(ptr, 0, (nmemb * size));
	return (ptr);
}
