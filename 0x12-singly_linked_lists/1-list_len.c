#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len - checks on the number of elements in a linked list
 *@h: pointer to the head of the list
 *Return: count
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
