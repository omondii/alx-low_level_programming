#include "lists.h"
#include<stddef.h>
#include<stdio.h>
#include<string.h>
/**
 *print_listint - prints all the elements of a listint_h
 *@h: singly linked list
 *Return: count
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
	{
		return (0);
	}
	for (; h != NULL; h = h->next, count++)
	{
		printf("%d\n", h->n);
	}
	return (count);
}
