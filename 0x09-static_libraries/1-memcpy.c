#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destination of memory
 * @src: source
 * @n: numbers
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int nash;

	for (nash = 0; nash < n; nash++)
	{
		dest[nash] = src[nash];
	}

	return (dest);
}
