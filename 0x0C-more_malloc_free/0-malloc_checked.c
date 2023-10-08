#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b:number of bytes.
 *
 * Return: d.
*/

void *malloc_checked(unsigned int b)
{
	int *d;

	d = malloc(b);

		if (d == 0)
			exit(98);
	return (d);
}
