#include "main.h"

/**
 * _memcpy-copying
 *
 * @dest:string
 *
 * @src:string
 * @n:int
 * Return:dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		*dest_ptr++ = *src++;
	}
	return (dest);
}
