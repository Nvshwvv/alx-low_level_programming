#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: pointer to string
 * Return: null or pointer
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	n = malloc(size * sizeof(*str) + 1);
	if (n == 0)
		return (NULL);

	{
		for (; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}
