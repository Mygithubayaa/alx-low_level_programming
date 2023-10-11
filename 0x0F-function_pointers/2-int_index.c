#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index-search
 * @array:1
 *@size:2
 *@cmp:3
 *Return:int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);
	for (n = 0; n < size; n++)
	if (cmp(array[n]) != 0)
	{
		return (n);
	}
	return (-1);
}
