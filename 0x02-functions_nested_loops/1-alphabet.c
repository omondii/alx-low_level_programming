#include "main.h"
/**
 *main - A program that prints the alphabet in
 * lowercase
 *
 *Return: If successful, return 0
 *
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
	return (0);
}
