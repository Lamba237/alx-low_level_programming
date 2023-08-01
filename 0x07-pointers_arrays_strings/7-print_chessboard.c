#include "main.h"
/**
 * _chessboard - prints the chessboard.
 * @a: pointer char.
 *
 * Return: returns.
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}
	return (0);
}
