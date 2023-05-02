#include "lists.h"
#include<stdlib.h>
/**
 *reverse_listint - reverses the contents of a listint_t
 *@head: the start of listint_t
 *Return:head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
