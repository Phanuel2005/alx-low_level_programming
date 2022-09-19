#include "main.h"

/**
 * _isalpha - checks for capital letters
 * @c: Is the variable that will be checked
 * Returds 0 or 1 depending on the condition of the function
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
