#include "main.h"
#include<stdio.h>
/**
 *binary_to_uint - converts a binary number to an unsugned int
 *@b: string of 0 and 1 chars
 *Return: unsgned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;
	int power = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i + 1])
		i++;

	while (i >= 0)
	{
		if (b[i] == '0')
		{
			i--;
			power++;
		}
		else if (b[i] == '1')
		{
			val += (1 << power);
			power++;
			i--;
		}
		else
			return (0);
	}
	return (val);
}
