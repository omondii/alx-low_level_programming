#include "main.h"
/**
 *print_line - prints a straight line
 *
 *@n: the number of times _ wil be printed
 *Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
