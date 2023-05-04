#include "main.h"

/**
 *set_bit - sets value of a bit at an index to 1
 *@n:pointer to number to set
 *@index: number position
 *Return: success (1) fail (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;
	unsigned int val = sizeof(n) * 8 - 1;

	if (index > val)
	{
		return (-1);
	}
	mask = mask << index;
	*n = *n | mask;

	return (1);
}
