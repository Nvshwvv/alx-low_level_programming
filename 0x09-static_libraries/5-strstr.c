#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring
 * @haystack: input
 * @needle: input also
 * Return: 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *na = haystack;
		char *sh = needle;

		while (*na == *sh && *sh != '\0')
		{
			na++;
			sh++;
		}
		if (*sh == '\0')
			return (haystack);
	}
	return (NULL);
}
