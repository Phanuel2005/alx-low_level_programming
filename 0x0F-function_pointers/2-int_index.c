#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index- Function that searches for an integer.
 * @array: Array function to be searched.
 * @size: Size of array.
 * @cmp: Function used to compare values.
 * Return: Returns index of first integer to match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
