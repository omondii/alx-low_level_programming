#include "lists.h"
#include<stdlib.h>
/**
 *pop_listint - deletes a node at the beginning while storing its contents
 *@head: start of the node to delete
 *Return: count
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		count++;
	}
	return (count);
}
