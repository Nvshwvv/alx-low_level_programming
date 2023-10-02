#include "main.h"

/**
 * _isdigit - Check that if the number is digit from 0 -9
 * @c: the number to be cheked
 * Return: 1 if it a digit 0 for enything else
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
