#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b:number of bytes.
 *
 * Return: d.
*/

void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);

		if (m == 0)
			exit(98);
	return (m);
}
