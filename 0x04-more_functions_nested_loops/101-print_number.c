#include "main.h"
#include <stdio.h>
/**
 * print_number - A function that prints an integer.
 * @n: The integer to print.
 * Return: Nothing!
 */
int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
