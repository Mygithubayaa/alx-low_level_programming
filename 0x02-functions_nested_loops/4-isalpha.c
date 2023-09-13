#include "main.h"

/**
 * _isalpha - check alphabet
 *
 * @c:the char we want to check
 *
 * Return: 1 for alphabet char or 0 for enything else
 *
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >=  97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
