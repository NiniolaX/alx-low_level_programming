#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: characters representing pieces on board.
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	int col, row;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
