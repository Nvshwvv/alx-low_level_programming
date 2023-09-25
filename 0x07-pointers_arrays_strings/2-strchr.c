#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: pointer to constant
 * @c: constant
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	unsigned int nash;

	for (nash = 0; s[nash] >= '\0'; nash++)
	{
		if (s[nash] == c)
		{
			return (s + nash);
		}
	}
	return ('\0');
}
