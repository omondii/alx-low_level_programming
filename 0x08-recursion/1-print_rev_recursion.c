#include "main.h"
#include <string.h>
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: String to reverse
 *Return: Alwaya 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0' || *(s + 1) == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
