#include "main.h"

/**
 * _puts - Prints to stdout
 * @str: String to be printed
 * _putchar - prints new line to stdout
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
