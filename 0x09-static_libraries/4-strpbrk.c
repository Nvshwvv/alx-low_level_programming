#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: num of bytes
 * Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int nash, wa;
	char *p;

	nash = 0;
	while (s[nash] != '\0')
	{
		wa = 0;
		while (accept[wa] != '\0')
		{
			if (accept[wa] == s[nash])
			{
				p = &s[nash];
				return (p);
			}
			wa++;
		}
	nash++;
	}
	return (0);
}
