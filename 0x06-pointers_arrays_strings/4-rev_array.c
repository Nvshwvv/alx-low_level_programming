#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: any array of integars
 * @n: the number of elemnts of the array
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
