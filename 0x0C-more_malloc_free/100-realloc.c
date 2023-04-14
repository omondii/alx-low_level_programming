#include "main.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: current pointer address
 *@old_size: allocated space for ptr
 *@new_size: size in bytes of the new memory block
 *Return: always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new = malloc(new_size);
	if (new == NULL)
	{
		return (NULL);
	}

	memcpy(new, ptr, (old_size < new_size) ? old_size : new_size);

		free(ptr);

	return (new);
}
