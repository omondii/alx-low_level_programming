#include "main.h"
/**
 *print_alphabet - prints the alphabet in lowercase
 *
 *
 *Return: If successful, return 0
 *
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
