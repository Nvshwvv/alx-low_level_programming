#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: arguments counter
 * @argv: argument list
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
