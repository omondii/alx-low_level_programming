#include "main.h"
/**
 * _abs - computes the absolute value of an interger
 *@r: the number to get its absolute value
 *
 *Return: If succesfull, return 0 else return 1
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
