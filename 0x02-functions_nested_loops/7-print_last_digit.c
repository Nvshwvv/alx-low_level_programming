#include "main.h"

/**
 * print_last_digit - print the last digit or a number
 * @n: The number that to be created
 * Return: The value of the last number
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
