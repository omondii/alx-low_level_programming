#include "main.h"
/**
 *check_recursion - a subprocess of _sqrt_recursion.
 *@n: number
 *@i: loops giving us possible square roots
 *Return: Always (0)
 */
int check_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (check_recursion(n, i + 1));
}

/**
 *_sqrt_recursion - finds the square root of a number using recursion
 *@n: number to calc square
 *Return: check_recursion (1)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_recursion(n, 0));
}
