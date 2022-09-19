#include "main.h"
#include <string.h>

/**
 * print_rev -> Prints the reverse of an entered string
 * @s: parameter to be pssed
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchaar(s[i]);
	}
	_putchar('\n');
}