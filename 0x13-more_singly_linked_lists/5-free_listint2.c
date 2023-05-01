#include"lists.h"
#include<stdlib.h>
#include<stddef.h>
/**
 *free_listint2 - free a listint_t and sets the head to NULL
 *@head: start of the node in listint_t
 *Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
