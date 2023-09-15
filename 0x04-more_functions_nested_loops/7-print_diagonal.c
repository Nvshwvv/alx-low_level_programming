#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of times to print diagnoal line
 * Return: empty
*/

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < n; y++)
	{
	_putchar('_');
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
