#include "main.h"

/**
 * _memset-to fill memory
 * @s:string
 * @b:string
 * @n:intger
 * Return:s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		*(s + h) = b;
	}
	return (s);
}
