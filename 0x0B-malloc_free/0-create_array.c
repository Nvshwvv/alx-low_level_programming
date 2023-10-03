#include "main.h"
#include <stdlib.h>
/**
 * *create_array -  function that creates an array of chars
 * @size: the size of arrays
 * @c: chars
 * Return: pointer or Null
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (n == 0 || size == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
