#include<stdio.h>
#include "main.h"
/**
 *print_chessboard - prints the chess board
 *@a: 2D array
 *Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
