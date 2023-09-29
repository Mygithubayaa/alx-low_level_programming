#include "main.h"

/**
 * _pow_recursion-give power of int
 * @x:intger1
 * @y:intger2
 * Return:int
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x *  _pow_recursion(x, y - 1));
	}
}
