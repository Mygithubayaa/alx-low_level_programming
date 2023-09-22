#include "main.h"

/**
 * print_rev- print reveresd string
 * @s: string to be print
 * Return: 0
*/

void print_rev(char *s)
{
	int lg = 0;
	int n;

	while (*s != '\0')
	{
		lg++;
		s++;
	}
	s--;
	for (n = lg; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}

