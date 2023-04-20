#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - prints numbers
 *@n: number of arguments
 *@separator: string between numbers
 *Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		{
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
