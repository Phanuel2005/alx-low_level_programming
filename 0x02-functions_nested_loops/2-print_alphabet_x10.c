#include "main.h"

/**
 *print_alphabet_x10  - prints the _putchar and loop
 */
void print_alphabet_x10(void)
{
	int d;
	int b;

	for (d = 1; d <= 10; d++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
