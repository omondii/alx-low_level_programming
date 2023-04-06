#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number
 *Return: Always 0
 */
int _sqrt_recursion(int n, int f)
{
	if (f * f <= n)
	{
		if (f * f == n)
		{
			_putchar(f);
		}
		else
		{
			return (_sqrt_recursion(n, f + 1));
		}
	}
}
