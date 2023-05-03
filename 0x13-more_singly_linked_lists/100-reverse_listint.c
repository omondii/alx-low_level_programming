#include "lists.h"
#include<stdlib.h>
/**
 *reverse_listint - reverses the contents of a listint_t
 *@head: the start of listint_t
 *Return:head
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
