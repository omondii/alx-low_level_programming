#include "main.h"
/**
 *print_square - prints a sruare
 *
 *@size: the dimensions for the square
 *Return: Always 0
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
