#include "main.h"

/**
 * _strcat- to concatenates 2 string
 * @dest: string 1
 *
 * @src: string 2
 * Return:string
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}

	dest[i] = '\0';
	return (dest);
}
