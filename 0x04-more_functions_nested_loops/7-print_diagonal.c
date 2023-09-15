#include “main.h”

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *	should be printed
*/

void print_diagonal(int n)
{
	int post, space;

	if (n <= 0)
		_putchar(‘\n’);
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
		{
			for (space = 1; space <= postsn; space++)
				_putchar(‘_’);
			_putchar(92); /*is equal to ‘/‘ char*/
			_putchar(‘\n’);
		}
	}
}
