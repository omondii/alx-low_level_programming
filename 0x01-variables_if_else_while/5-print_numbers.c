#include<stdio.h>
/**
 * main- a program that prints all single numbers less than 10
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
