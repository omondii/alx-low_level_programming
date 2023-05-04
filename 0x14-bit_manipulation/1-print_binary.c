#include "main.h"
/**
 * print_binary - prints a number in its binarynotation
 *@n: number to convert
 *Return: Void
 */
void print_binary(unsigned long int n)
{
	int c = 0;
	int val = sizeof(n) * 8 - 1;

	if (n == 0)
		_putchar('0');

	while (val >= 0)
	{
		if (n >> val & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
		val--;
	}
}
