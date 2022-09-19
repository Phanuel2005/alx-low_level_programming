#include "main.h"
#include <string.h>

/**
 * puts2 -> puts2 is the protagonist function in this block of c code
 * @str: str is just a parameter
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	_putchar(str[i]);
	_putchar('\n');
}
