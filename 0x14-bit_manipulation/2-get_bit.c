#include "main.h"
/**
 *get_bit - returns the value of a bit at an index
 *@n: number to check
 *@index: Index to check bit for
 *Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;
	unsigned int val = sizeof(n) * 8 - 1;

	if (index > val)
	{
		return (-1);
	}

	mask = mask << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
