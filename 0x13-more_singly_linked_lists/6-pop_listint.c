#include "lists.h"
#include<stdlib.h>
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
