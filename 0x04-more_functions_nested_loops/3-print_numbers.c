#include "main.h"
/**
 *print_numbers - prints numbers between 0-9
 *
 *Return: Nothing
 */
void print_numbers(void)
{
    char num;
    for (num = '0'; num <= '9'; num++)
    {
        _putchar(num);
    }
    _putchar('\n');
}
