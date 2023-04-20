#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - sums all its parameters
 *@n: number of arguments
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list args;

	va_start(args, n);

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);

		sum += arg;
	}

	va_end(args);

	return (sum);
}
