#include "lists.h"
#include <stdlib.h>
/**
 *sum_listint - adds data(n) of a listint_t
 *@head: start of listint_t
 *Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
	{
		return (0);
	}
	sum = sum_listint(head->next);
	sum += head->n;
	return (sum);
}
