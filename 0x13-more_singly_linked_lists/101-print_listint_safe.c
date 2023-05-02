#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *find_listint_safe - prints the contents of a linked list
 *@head: start of a linked list
 *Return: nmber of nodes in the list
 */
listint_t *find_listint_loop_pl(listint_t *head)
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
 *print_listint_safe - frees alists
 *@h: head of a list
 *Return: number of freed nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int loop = 1;
	listint_t *loopnode;

	loopnode = find_listint_loop_pl((listint_t *) head);

	for (; (head != loopnode || loop) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			loop = 0;
		head = head->next;
	}

	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
