#include "main.h"

/**
 * _isupper - check if uppercase letters
 * @c: char to check
 *
 * Return: if uppercase letter return 1, else returns 0
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);

	return (0);
}

