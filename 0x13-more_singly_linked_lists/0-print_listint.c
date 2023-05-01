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
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
