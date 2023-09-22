#include "main.h"

/**
 * reverse_array- reversing content of array
 *
 * @a:array
 * @n:num of elements
 * Return : void
*/

void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
