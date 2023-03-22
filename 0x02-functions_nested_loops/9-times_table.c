#include "main.h"
/**
 *times_table - prints the 9-times table
 *
 *Return: Alwast 0 (succeess)
 */
void times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (j == 0) {

                product = i * j;
                _putchar((product % 10) + '0');
            } else {

                _putchar(',');
                _putchar(' ');

                product = i * j;
                if (product <= 9) {
                    _putchar(' ');
                } else {
                    _putchar((product / 10) + '0');
                }
                _putchar((product % 10) + '0');
            }
        }
        _putchar('\n');
    }
}
