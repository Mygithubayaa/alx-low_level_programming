#include "main.h"

/**
 * _strlen_recursion-give length
 *
 * @s:string
 *
 * Return:int
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
	return (0);
	}
	else
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
