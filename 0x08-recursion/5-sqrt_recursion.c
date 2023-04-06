#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number
 *Return: Always 0
 */
int check_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return check_recursion(n, i + 1);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return check_recursion(n, 0);
}
