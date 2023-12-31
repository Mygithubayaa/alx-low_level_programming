#include "main.h"

/**
 * _strncpy- function to copy string
 *
 * @dest: string 1
 * @src:string 2
 * @n:to count byte
 * Return:dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i]  = '\0';
		i++;
	}
	return (dest);
}
