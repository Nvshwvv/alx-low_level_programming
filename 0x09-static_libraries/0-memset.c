#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to put a constant
 * @b: the constant
 * @n: num of byte to use
 * Return: the pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int nash;

	for (nash = 0; n > 0; nash++, n--)
	{
		s[nash] = b;
	}

	return (s);
}
