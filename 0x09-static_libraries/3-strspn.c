#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: num of bytes
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int nash, wa;

	for (nash = 0; s[nash] != '\0'; nash++)
	{
		for (wa = 0; accept[wa] != s[nash]; wa++)
		{
			if (accept[wa] == '\0')
				return (nash);
		}
	}
	return (nash);
}
