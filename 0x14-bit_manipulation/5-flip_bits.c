#include "main.h"
/**
 *flip_bits - gives number of bits you would to flip to get from one
 *number to another
 *@n: first number
 *@m: second number
 *Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int val = n ^ m;
	int count = 0;

	if (!n || !m)
	{
		return (0);
	}
	while (val)
	{
		if (val & 1)
			count++;
		val = val >> 1;
	}
	return (count);
}
