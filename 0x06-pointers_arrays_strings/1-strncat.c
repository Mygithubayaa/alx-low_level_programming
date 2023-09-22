#include "main.h"

/**
 * _strncat- to concatenates two strings.
 *
 * @dest: string 1
 * @src: string 2
 * @n: num of byet
 * Return:dust
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int o;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	o = 0;
	while (o < n && src[o] != '\0')
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest);
}
