#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name- Function that prints name.
  * @name : string that contains name.
  * @f : pointer to function that prints name.
  * Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
