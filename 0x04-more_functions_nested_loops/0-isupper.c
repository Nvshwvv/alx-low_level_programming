#include "main.h"

/**
 * _isupper - Check if the letter is upper
 * @n: the number to be checked
 * Return: 1 if it is upper or 0 if it anything else
*/

int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	return (0);
}
