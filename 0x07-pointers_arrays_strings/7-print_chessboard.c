#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: rows
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	unsigned int nash, wa;

	for (nash = 0; nash < 8; nash++)
	{
		for (wa = 0; wa < 8; wa++)
		{
			_putchar(a[nash][wa]);
		}
		_putchar('\n');
	}
}
