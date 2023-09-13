#include "main.h"

/**
 * _islower - checking
 *
 * @c: want to check
 *
 * Return: 1 for lower or 0 for else
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
