#include <stdio.h>
/**
 *main - Entry point
 *@argc: Counts the total number of arguments passed to main
 *@argv: An array of strings
 *Return: Always(0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
