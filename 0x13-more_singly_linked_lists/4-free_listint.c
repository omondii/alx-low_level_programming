#include"lists.h"
#include<stdlib.h>
#include<stddef.h>
/**
 *free_listint - free a listint_t
 *@head: start of the node in listint_t
 *Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
