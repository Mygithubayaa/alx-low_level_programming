#include "main.h"

/**
 * print_sign - print the sign
 *
 * @n: char to be check
 *
 * Return: 1 when postive, -1 when negative ,  0 anything else
*/

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
