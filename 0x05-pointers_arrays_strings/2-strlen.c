#include "main.h"

/**
 * _strlen- functionto know long of string
 * @s: string
 * Return:long of string
*/

int _strlen(char *s)
{
	int lg = 0;

	while (*s != '\0')
	{
		lg++;
		s++;
	}
	return (lg);
}
