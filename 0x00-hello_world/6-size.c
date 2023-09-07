#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using sizof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizof(char));
	printf("Size of a int: %u byte(s)\n", sizof(int));
	printf("Size of a long int: %u byte(s)\n", sizof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizof(long long int));
	printf("Size of a float: %u byte(s)\n", sizof(float));
	return (0);
}
