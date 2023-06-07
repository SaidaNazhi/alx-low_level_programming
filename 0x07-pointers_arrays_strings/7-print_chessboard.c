#include "main.h"

/**
 * print_chessboard - enry pointer
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int n;
	int b;

	for (n = 0; n < 8; n++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[n][b]);
		_putchar('\n');
	}
}
