#include "lists.h"
#include <stdlib.h>
/**
 *find_listint_loop - finds a loop in alinked list
 *@head: start of linked list to search
 *Return: address of node where loop starts
 */
listint_t *find_listint_loop1(listint_t *head)
{
		listint_t *ptr = head, *ptr2 = head;

	while (ptr && ptr2 && ptr2->next)
	{
		ptr = ptr->next;
		ptr2 = ptr2->next->next;
		if (ptr == ptr2)
		{
			ptr = head;
			while (ptr != ptr2)
			{
				ptr = ptr->next;
				ptr2 = ptr2->next;
			}
			return ptr;
		}
	}
	return NULL;
}
/**
 *free_listint_free - frees listint_t
 *@h: head of list to print
 *Return: Number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = find_listint_loop1(*h);
	for (len = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
