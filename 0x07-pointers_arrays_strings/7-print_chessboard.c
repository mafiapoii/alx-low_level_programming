#include "holberton.h"
/**
 *print_chessboard - A function that prints a chessboard.
 *@a: variable array for chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, i2;

	i = 0;
	while (i < 8)
	{
		i2 = 0;
		while (i2 < 8)
		{
			_putchar(a[i][i2]);
			i2++;
		}
		i++;
		_putchar('\n');
	}
}
