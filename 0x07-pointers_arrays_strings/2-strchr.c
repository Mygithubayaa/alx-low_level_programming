#include "main.h"
#include <stddef.h>


/**
 * _strchr-locating
 * @s:string
 * @c:string
 * Return:s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	return (NULL);
}
