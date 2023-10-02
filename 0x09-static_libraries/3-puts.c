#include "main.h"

/**
 * _puts - prints a string.
 * _putchar - function
 * @str: pinter.
 */

void _puts(char *str)
{
	for (; *str != 0; str++)
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
