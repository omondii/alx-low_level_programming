#include <stdio.h>
/**
 *main - a program that prints all arguments passed to it
 *@argc: counts the total number of arguments passed to main
 *@argv: pointer of strings
 *Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
