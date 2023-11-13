#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator- Function that executes a parameter on an array.
 *@array : Array function is executed on.
 *@size : size of array.
 *@action : a pointer to function that is used.
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
