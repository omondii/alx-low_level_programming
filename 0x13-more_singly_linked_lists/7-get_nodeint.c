#include"lists.h"
#include<stdlib.h>
/**
 *get_nodeint_at_index - returns the nth node of a listint_t
 *@head: start of the list
 *@index: node position to get
 *Return: count
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *temp;

	temp = head;
	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}
	if (index == 0)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
