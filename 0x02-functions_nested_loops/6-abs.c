#include "main.h"

/**
 *  _abs - gives absolute value
 *
 * @c: the char to be calculate
 *
 *  Return: absolaute value or 0
*/

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
