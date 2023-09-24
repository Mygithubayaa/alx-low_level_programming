#include "main.h"

/**
 * print_number- to print intger
 *
 *
 * @i:intger
 * Return:void
*/

void print_number(int i)
{
	if (i < 0)
	{
	_putchar('-');
	i = -i;
	}
	if (i / 10)
	{
	print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}




