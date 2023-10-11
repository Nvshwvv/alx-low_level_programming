#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: the string name
 * @f: function
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
