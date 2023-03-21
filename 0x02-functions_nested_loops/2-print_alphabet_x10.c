#include "main.h"
/**
 *print_alphabet_x10 - a program that prints 10 times the alphabet
 *     using "main.h" header
 *
 *Return: If successful return 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
