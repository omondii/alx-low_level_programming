#include "lists.h"
/**
 *listint_len - prints the number of elements in a linked list
 *@h: head of a list
 *Return: count
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
