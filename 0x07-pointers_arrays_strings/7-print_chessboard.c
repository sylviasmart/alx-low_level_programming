#include "main.h"

/**
* print_chessboard - function to print chessboard
* @a: array string
* Return: 0
*/
void print_chessboard(char (*a)[8])
{
	int y;

	int z;

	for (y = 0; y < 8; y++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(a[y][z]);
		}
		_putchar('\n');
	}
}
