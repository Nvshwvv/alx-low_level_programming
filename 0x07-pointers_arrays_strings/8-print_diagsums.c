#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: arrays
 * @size: the size
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int itr, sum1 = 0, sum2 = 0;

	for (itr = 0; itr < size; itr++)
	{
		sum1 += a[itr];
		sum2 += a[size - itr - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
