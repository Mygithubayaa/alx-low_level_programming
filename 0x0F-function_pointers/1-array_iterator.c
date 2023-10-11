#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator-print
 *@array:array
 *@size:sizearray
 *@action:pointer to function
 * Return:0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
	return;
	for (n = 0; n < size; n++)
	action(array[n]);
}
