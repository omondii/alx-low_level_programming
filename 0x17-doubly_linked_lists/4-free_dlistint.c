#include "lists.h"
/**
 *free_dlistint - frees a linked list
 *@head: head of the linked list
 *Return: Void (nothing)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
