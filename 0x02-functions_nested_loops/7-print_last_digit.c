#include "main.h"
/**
 *print_last_digit - a function that will print the last number
 *
 *@x: the number whose last digit is to be displayed
 *Return: if successful return 0, if unsuccessful return 1
 */
int print_last_digit(int x)
{
	int lastdigit = x % 10;

	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar (lastdigit + '0');

	return (lastdigit);
}
