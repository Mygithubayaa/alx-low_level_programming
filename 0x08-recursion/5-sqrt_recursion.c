#include "main.h"

int _sqrt_recursion_h(int n, int i);

/**
 *_sqrt_recursion - returns square root
 * @n: int
 * Return: int
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (_sqrt_recursion_h(n, 0));
}

/**
 * _sqrt_recursion_h - help first function
 * @n: intger
 * @i: intger
 * Return: int
*/

int _sqrt_recursion_h(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (_sqrt_recursion_h(n, i + 1));
}
